/*
Runtime: 8 ms, faster than 77.43% of C++ online submissions for Roman to Integer.
Memory Usage: 7.8 MB, less than 50.08% of C++ online submissions for Roman to Integer.
*/
// Roman Rules: http://www.mathland.idv.tw/history/roman.htm

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> Map= {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                    {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        int current, next;
        
        for (int i=0; i<s.size(); i++){
            current = s[i];
            next = s[i+1];
            if (next) {
                if (Map.at(current) >= Map.at(next)){
                    ans += Map.at(current);
                }else{
                    ans += (Map.at(next)-Map.at(current));
                    i++;
                }
            }else{
                ans += Map.at(current);
            }
            
        }        
        return ans;
    }
};