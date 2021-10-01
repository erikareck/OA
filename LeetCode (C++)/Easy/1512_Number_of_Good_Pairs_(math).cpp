/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Good Pairs.
Memory Usage: 7.3 MB, less than 82.21% of C++ online submissions for Number of Good Pairs.
*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> Map;
        unordered_map<int, int>::iterator it;
        int ans=0;
        for(auto p=nums.begin(); p != nums.end(); p++){
            it = Map.find(*p);
            if(it != Map.end())
                ++(it->second);
            else
                Map.insert({*p, 1});
        }
        for (auto p=Map.begin(); p!=Map.end(); p++){
            ans+=(p->second)*(p->second - 1)/2;            
        }        
        return ans;
    }
};
//Other's Solution
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      unordered_map<int, int> frequency;
      for (int i = 0; i < nums.size(); ++i)
        ++frequency[nums[i]];
      
      int count = 0;
      for (const auto& [num, freq] : frequency) //這段語法可以學起來
        count += freq * (freq - 1) / 2;
      
      return count;
    }
};