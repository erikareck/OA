/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Longest Common Prefix.
Memory Usage: 9.1 MB, less than 95.43% of C++ online submissions for Longest Common Prefix.
*/
// Method: Vertical Scan
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int min = 200;
        if (strs.size() == 0) return ans; //strs.empty() takes more time than strs.size()...
        if (strs.size() == 1) return strs[0];
        for (auto p=strs.begin(); p != strs.end(); p++){
            if (*p == "") return ans;
            else{
                //cout << p->size() << endl;
                if (p->size() < min) min = p->size();
            }
        }
        cout << min << endl;
        for (int i = 0; i<min; i++){
            for (auto p=strs.begin(); p != strs.end()-1; p++){
                //cout << p->at(i)<< endl;
                //if (*p == "") return ans;
                if (p->at(i) == (p+1)->at(i)){
                    if (p != strs.end()-2) continue;
                    else ans.push_back(p->at(i)); //all the strs has the same char at index i
                }
                else return ans;
            }
        }        
       return ans;
    }
};

/*
    Detailed Explanation:
    https://stackoverflow.com/questions/743197/size-vs-empty-in-vector-why-empty-is-preferred
    
    empty() should be preferred as it has constant time complexity 
    regardless of the container type.
    
    e.g.
        std::list
        std::vector

*/