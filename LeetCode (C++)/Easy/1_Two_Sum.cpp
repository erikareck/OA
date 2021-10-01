/*
Runtime: 4 ms, faster than 99.57% of C++ online submissions for Two Sum.
Memory Usage: 9 MB, less than 99.90% of C++ online submissions for Two Sum.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> Map;
        //vector<int> ans;
        
        for (int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            if (Map.count(complement)){
                //unodered_map.contains (C++20)
                //unodered_map.insert({K,V}) (C++17)
                vector<int> ans{Map.at(complement), i};
                return ans;
            }
            Map.insert({nums[i], i});
        }
        return {}; //must return before the function end
    }
};

/* NOTE:
LeetCode uses the C++ 17 standard
C++:
    Vector:
        declaration:
            vector<int> arg{};
        method:
            vector.push_back();

    unorderd_map:
        declaration:
            vector<K, V> arg{{key_1, value_1}, {key_2, value_2} ...};
        method:
            unordered_map.insert({K, V}); // inserts elements 
            unordered_map.count(key); //returns the number of elements matching specific key
            unordered_map.find(key); //finds element with specific key
            unordered_map.at(key) //access specified element with specified key    

*/