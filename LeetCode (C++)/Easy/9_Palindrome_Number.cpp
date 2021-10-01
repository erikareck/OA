/*
Runtime: 4 ms, faster than 95.16% of C++ online submissions for Palindrome Number.
Memory Usage: 6 MB, less than 99.98% of C++ online submissions for Palindrome Number.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        char sign = '-';
        string tmp = to_string(x);
        if ( *tmp.begin() == sign) return false;
        for (int i = 0; i < tmp.size()/2; i++){
            if (*(tmp.begin()+i) != *(tmp.end()-1-i)){
                return false;
            };            
        }
        return true;
    }
};