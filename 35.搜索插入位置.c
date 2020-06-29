/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

/* 
    二分法查找
 */

int searchInsert(int* nums, int numsSize, int target){
    int min = 0;
    int max = numsSize-1;

    while (max>=min)
    {
        int n = (max+min)/2;
        if (target < nums[n]) {
            max = n-1;
        }
        if (target > nums[n]) {
            min = n+1;
        }
        if (target == nums[n])
        {
            return n;
        }
        
    }
    return min;

}


// @lc code=end

