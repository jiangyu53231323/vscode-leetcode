/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    if(numsSize == 0)
        return 0;
    int *p1, *p2;
    p1 = p2 = nums;     //双指针 p1慢指针 p2快指针
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (*p2 != val)     //快指针指向的不是移除元素，则将元素复制给慢指针
        {
            *p1 = *p2;
            p1++;
            count++;
        }
        p2++;               //若指向移除元素则跳过
    }
    return count;
}


// @lc code=end

