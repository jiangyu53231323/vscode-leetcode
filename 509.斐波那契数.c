/*
 * @lc app=leetcode.cn id=509 lang=c
 *
 * [509] 斐波那契数
 */

// @lc code=start


int fib(int N){
    if(N<=0)
        return 0;
    int *dp = (int *)malloc(sizeof(int) * (N + 1));
    for (int i = 0; i <= N; i++)
    {
        dp[i] = 0;
    }
    // base case
    dp[1] = 1;
    for (int i = 2; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[N];
}


// @lc code=end

