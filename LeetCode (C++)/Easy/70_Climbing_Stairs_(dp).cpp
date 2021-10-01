/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
Memory Usage: 5.9 MB, less than 81.21% of C++ online submissions for Climbing Stairs.
*/
//dp
class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        int dp[n+1];
        dp[1] = 1;
        dp[2] = 2;
        for (int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
/*
Approach 3: Dynamic Programming

Algorithm

As we can see this problem can be broken into subproblems, and it contains the optimal substructure property i.e. its optimal solution can be constructed efficiently from optimal solutions of its subproblems, we can use dynamic programming to solve this problem.

One can reach ithi^{th}ith step in one of the two ways:

    - Taking a single step from (i−1)th(i-1)^{th}(i−1)th step.

    - Taking a step of 222 from (i−2)th(i-2)^{th}(i−2)th step.

So, the total number of ways to reach ithi^{th}ith is equal to sum of ways of reaching (i−1)th(i-1)^{th}(i−1)th step and ways of reaching (i−2)th(i-2)^{th}(i−2)th step.

Let dp[i]dp[i]dp[i] denotes the number of ways to reach on ithi^{th}ith step:

dp[i]=dp[i−1]+dp[i−2] dp[i]=dp[i-1]+dp[i-2] dp[i]=dp[i−1]+dp[i−2]
*/