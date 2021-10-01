/*
Runtime: 4 ms, faster than 94.91% of C++ online submissions for Search Insert Position.
Memory Usage: 9.5 MB, less than 96.87% of C++ online submissions for Search Insert Position.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        unsigned front = 0;
        unsigned back = nums.size()-1;
        unsigned middle = (nums.size()-1)/2;
        if (target > nums.back()) return nums.size();
        if (target < nums.front()) return 0;
        while (front != middle && back != middle){
            if (target > nums.at(middle)){ 
                front = middle;                
            }
            else if (target < nums.at(middle)){
                back = middle;
            }else{ // find the target in the array
                return middle;
            }
            
            middle = (front + back)/2;
            cout << "front = " << front << ", ";
            cout << "middle = " << middle << ", ";
            cout << "back = " << back << endl; 
        }
        if (target > nums.at(middle)) return ++middle;
        else if (target <nums.at(middle))return --middle;
        return middle;
    }
};

/*
Runtime: 4 ms, faster than 94.91% of C++ online submissions for Search Insert Position.
Memory Usage: 9.7 MB, less than 89.20% of C++ online submissions for Search Insert Position.
*/
//pivot需要做運算時盡量用<int>而不用藥unsigned，免得超出範圍有例外要處，很麻煩
//雖然unsigned使用的mem.比較少
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int front = 0;
        int back = nums.size()-1;
        int mid;
        while (front <= back){
            mid = (front + back) / 2;
            
            if (target == nums.at(mid)) return mid;
            if (target > nums.at(mid)) front = mid+1;
            else back = mid-1;
        }
        
        return front;
    }
};