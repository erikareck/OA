/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9 MB, less than 90.33% of C++ online submissions for Merge Sorted Array.
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(unsigned i=m, j=0; i<m+n && j<n; i++, j++){
            nums1[i]=nums2[j]; 
        } 
        sort(nums1.begin(), nums1.end());
        return;
    }
};

//qsort()
//http://www.cplusplus.com/reference/cstdlib/qsort/