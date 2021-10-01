/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Plus One.
Memory Usage: 8.7 MB, less than 97.62% of C++ online submissions for Plus One.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::iterator p = digits.end()-1;
        vector<int> ans;
        while (p != digits.begin()-1){
            if (*p != 9){
                ans.insert(ans.begin(), *p+1);
                p--;
                while(p!=digits.begin()-1){
                    ans.insert(ans.begin(), *p);
                    p--;
                }
                break;
            }else{
                ans.insert(ans.begin(), 0);
                if (p==digits.begin()){
                    ans.insert(ans.begin(), 1);
                    break;
                }
                else p--;
            }
        }
        return ans;
    }
};