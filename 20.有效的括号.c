/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start

#include <stdbool.h>

bool isValid(char * s){
    int j = 0;
    if(s=="")
        return true;
    char q[strlen(s)+1];
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '(' || s[i]=='{' || s[i]=='[' ){
            j++;
            q[j] = s[i];
        }
        else if (s[i] == ')' || s[i]=='}' || s[i]==']')
        {
            if (s[i]==q[j]+1 || s[i]==q[j]+2)
            {
                j--;
            }
            else
            {
                return false;
            }
            
        }
        
    }
    if (j == 0) {
        return true;
    }
    else
    {
        return false;
    }
    
}


// @lc code=end

