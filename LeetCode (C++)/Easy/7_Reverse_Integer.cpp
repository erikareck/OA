/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
Memory Usage: 6.4 MB, less than 18.53% of C++ online submissions for Reverse Integer.
*/

class Solution {
public:
    int reverse(int x) {
        string tmp = to_string(x);
        string ans;
        char discard = '0';
        
        if (x == 0) return 0;       
        
        if (isless(x, 0.0)) tmp.erase(tmp.begin());
        
        for (auto c: tmp){
            if (ans.size() != 0 || c != discard){
                ans.insert(0, 1, c);
            } 
        }
        
        try {
            if (isless(x, 0.0)) return -stoi(ans);
            return stoi(ans);
        }catch( exception& e ) {
            return 0;
        }
    }
};

