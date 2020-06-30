/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start

/* 
    1、for循环暴力求解
    2、KMP算法
 */

int strStr(char * haystack, char * needle){

/*     // 暴力算法
    int len1=strlen(haystack);
    int len2=strlen(needle);
    int flag=0;
    if(len1==0&&len2==0){
        return 0;
    }
    if(len1<len2)
        return -1;
    for(int i=0;i<len1-(len2-1);i++){
        flag=0;
        for(int j=0;j<len2;j++){
            if(haystack[i+j]!=needle[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1; */

    // ==================================================================
    // KMP算法
    int len1=strlen(haystack);
    int len2=strlen(needle);
    if(len2==0){
        return 0;
    }
    if(len1<len2)
        return -1;

    // dp[状态][字符]=下个状态
    // 默认状态为0
    int **dp = (int **)malloc(sizeof(int*)*len2);
    for (int i = 0; i < len2; i++)
    {
        dp[i] = (int *)malloc(sizeof(int) * 256);
    }
    for (int i = 0; i < len2; i++)
    {
        for (int j = 0; j < 256; j++)
        {
            dp[i][j] = 0;
        }
    }
    // int dp[len2][256];
    // 只有遇到模式串第一个字符，状态才从0前进为1
    dp[0][needle[0]]=1;
    // X为影子状态，初始为0
    int X = 0;
    // 当前状态j从1开始
    for (int j = 1; j < len2; j++)
    {
        for (int c = 0; c < 256; c++)
        {
            if (c == needle[j])
            {
                dp[j][c]=j+1;
            }else
            {
                dp[j][c]=dp[X][c];
            }
        }
        // 更新影子状态
        X = dp[X][needle[j]];
    }
    // 模式串初始状态为0
    int j = 0;
    for (int i = 0; i < len1; i++)
    {
        // 计算模式串的下一个状态
        j = dp[j][haystack[i]];
        // 到达终止态，返回结果并释放内存
        if(j == len2) {
	        for (int n = 0; n < len2; ++n)
		        free(dp[n]);
	        free(dp);
            return i-len2+1;
        }
    }
    // 没达到终止态，匹配失败，释放内存
	for (int n = 0; n < len2; ++n)
	    free(dp[n]);
	free(dp);
    return -1;
}


// @lc code=end

