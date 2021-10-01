/*
Runtime: 12 ms, faster than 99.18% of C++ online submissions for Missing Number.
Memory Usage: 18 MB, less than 62.18% of C++ online submissions for Missing Number.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (nums.size()+1)*nums.size()/2;
        return sum-accumulate(nums.begin(), nums.end(), 0);  
    }
};

// sum the elements in the vetor : 
//      std::accumulate(vector.begin(), vector.end(), initial_sum_num)