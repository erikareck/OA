/*
Runtime: 8 ms, faster than 82.21% of C++ online submissions for Maximum Subarray.
Memory Usage: 13.2 MB, less than 82.20% of C++ online submissions for Maximum Subarray.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        unsigned len = nums.size();
        if (len == 1) return nums[0];
        int dp[2][len];
        dp[0][0] = INT_MIN;
        dp[1][0] = nums[0];
        for (unsigned i = 1 ; i<len ; i++){
            dp[0][i] = max(dp[0][i-1], dp[1][i-1]);
            dp[1][i] = max(nums[i], nums[i]+dp[1][i-1]); //連續或者斷掉之前的連續加總
        }        
        return dp[0][len-1] > dp[1][len-1] ? dp[0][len-1] : dp[1][len-1];
    }
};

/* Linear Solution "Sliding Windows"
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], curSum = 0;
        
        for (int n : nums) {
            if (curSum < 0)
                curSum = 0;
            curSum += n;
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
    }
};
*/