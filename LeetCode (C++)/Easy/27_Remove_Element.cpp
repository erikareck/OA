/* Method:Erase
Runtime: 4 ms, faster than 53.31% of C++ online submissions for Remove Element.
Memory Usage: 8.8 MB, less than 92.48% of C++ online submissions for Remove Element.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        auto p = nums.begin();
        while (p != nums.end()){
            if (*p == val) nums.erase(p);
            else p++;
        }
        return nums.size();
    }
};
/* Method:In-place
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
Memory Usage: 8.9 MB, less than 82.47% of C++ online submissions for Remove Element.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j=0; j<nums.size();j++){
            if (nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};