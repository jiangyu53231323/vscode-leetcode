/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <windows.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result=NULL;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = (i+1); j < numsSize; j++)
        {
            if(nums[i]+nums[j]==target){
                result = (int *)malloc(sizeof(int) * 2);
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
        
    }
    *returnSize = 0;
    return result;
}


// @lc code=end

