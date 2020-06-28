/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start

#include <stdbool.h>
bool isPalindrome(int x){
    int que[10];
    // int *que;
    int i = 0;
    if(x<0){
        return false;
    }
    if (x == 0)
    {
        return true;
    }
    
    while(x != 0){
        int j = x % 10;
        x = x / 10;
        // que = (int *)malloc(sizeof(int));
        que[i] = j;
        i++;
    }
    int head = 0;
    int end = i - 1;
    while(head < end){
        if(que[head] != que[end]){
            return false;
        }
        head++;
        end--;
    }
    return true;
}


// @lc code=end

