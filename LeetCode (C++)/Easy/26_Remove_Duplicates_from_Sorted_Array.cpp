/* My Method (Remove Duplicate element)
Runtime: 140 ms, faster than 17.92% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 13.7 MB, less than 91.85% of C++ online submissions for Remove Duplicates from Sorted Array.
*/

class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty() || nums.size() == 1) return nums.size();
        for (auto p=nums.begin(); p != nums.end()-1;){
            if (*p == *(p+1)) nums.erase(p); //always point to the first element in the array unless p++
            else p++;
        }
        return nums.size();
    }
};

/* ChatRoom Best Answer (In-place): not really remove all duplicate element.....
Runtime: 8 ms, faster than 96.71% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 13.7 MB, less than 83.54% of C++ online submissions for Remove Duplicates from Sorted Array.    
*/
class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++){
            if (nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
