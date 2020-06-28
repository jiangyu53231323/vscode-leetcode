/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;
    int *p1, *p2;
    p1 = nums;
    p2 = nums + 1;
    int count = 1;

    for (int i = 0; i < numsSize-1; i++)
    {
        if(*p1 != *p2){
            p1++;
            *p1 = *p2;
            count++;
        }
        p2++;
    }
    return count;
}


// @lc code=end

