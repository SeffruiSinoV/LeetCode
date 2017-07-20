#ifndef _LEETCODE_70_
#define _LEETCODE_70_
/* 
 * You are climbing a stair case. It takes n steps to reach to the top.
 *
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? 
 *
 * LeetCode 70 https://leetcode.com/problems/climbing-stairs/#/description 
 */


long long climbStairs(int n) {
    if(n == 1)
        return 1;
    long long DP[n+1];
    DP[1] = 1;
    DP[2] = 2;
    for(int i=3;i<=n;++i)
    {
        DP[i] = DP[i-1] + DP[i-2];
    }
    return DP[n]; 
}

#endif
