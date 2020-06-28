/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start

int reverse(int x){
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x = x / 10;
        if(rev > 2147483647/10 || rev == 2147483647/10 && pop > 7)
            return 0;
        if(rev < -2147483648/10 || rev == -2147483648/10 && pop < -8)
            return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}


// @lc code=end

