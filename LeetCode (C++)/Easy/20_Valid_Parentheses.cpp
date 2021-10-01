/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.2 MB, less than 94.18% of C++ online submissions for Valid Parentheses.
*/

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> p_list = {{'(', 0} ,{')', 1},
                                           {'[', 2} ,{']', 3},
                                           {'{', 4} ,{'}', 5}};
        vector<char> stack;

        for (auto c: s){
            if (p_list.at(c)%2 == 0){
                stack.push_back(c);
                continue;
            }else if (!stack.empty()){
                if (p_list.at(stack.back())/2 != p_list.at(c)/2) return false;
                else stack.pop_back();
            }else if (p_list.at(c)%2 == 1 && stack.empty()){
                return false;
            }            
        }
        if (!stack.empty()) return false;
        return true;
    }
};