/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start


int strStr(char * haystack, char * needle){

    // if(needle == "")
    //     return 0;
    // int len1 = strlen(haystack);
    // int len2 = strlen(needle);
    // int i = 0;
    // for (i = 0; i < len1-len2; i++)
    // {
    //     for (int j = 0; j < len2; j++)
    //     {
    //         if(needle[j] != haystack[i+j])
    //             break;
    //     }
    //     return i;
    // }
    
    int len1=strlen(haystack);
    int len2=strlen(needle);
    int flag=0;
    if(len1==0&&len2==0){
        return 0;
    }
    // if(len1<len2)
    //     return -1;
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
    return -1;

}


// @lc code=end

