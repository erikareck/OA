/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Self Dividing Numbers.
Memory Usage: 6.5 MB, less than 76.29% of C++ online submissions for Self Dividing Numbers.
*/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int digit, copy;        
        for(int i = left; i<=right; i++){
            copy = i;
            while(copy != 0){
                digit = copy % 10;
                copy = (copy/10);
                if (digit == 0 || i%digit !=0) break;
            }
            if( digit != 0 && !(i%digit)) ans.push_back(i);
        }
        return ans;
    }
};