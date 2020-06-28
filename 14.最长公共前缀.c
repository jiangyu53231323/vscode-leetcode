/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start

#include <windows.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0) return "";  //如果字符串数组为空，直接返回""
    int i, j;
    int tag = 0;
    for( i = 0;i<strlen(strs[0]);i++){   //i表示列，strlen(strs[0])表示第一个字符串长度
        for( j = 1 ;j<strsSize;j++){    //j表示行
            if(strs[0][i]!=strs[j][i]){ //如果比较字符串的第i列不同，该列结束，直接跳出
                //strs[0][i]='\0';
                tag = 1;
                break;
            }
        }
        if(tag == 1) break;
    }
    char *str;
    str = (char *)malloc(sizeof(char) * (i+1));
    // str = (char *)malloc(sizeof(char) * i);
    for (int x = 0; x < i; x++)
    {
        str[x] = strs[0][x];
    }
    str[i] = '\0';
    return str;
}


// @lc code=end

