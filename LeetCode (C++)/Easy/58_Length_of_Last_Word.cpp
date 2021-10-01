/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Length of Last Word.
Memory Usage: 6.3 MB, less than 99.97% of C++ online submissions for Length of Last Word.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        unsigned counter = 0;
        basic_string<char>::iterator p = s.end()-1;
        while (*p==' ') {
            if( p!= s.begin()) p--;
            else return 0;
        }
        while (*p != ' '){
            if (p == s.begin()) return ++counter;
            else{
                counter++;
                p--;                
            }
        }
        return counter;
    }
};