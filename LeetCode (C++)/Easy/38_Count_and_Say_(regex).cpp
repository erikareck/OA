/*
Runtime: 88 ms, faster than 5.22% of C++ online submissions for Count and Say.
Memory Usage: 121.4 MB, less than 15.58% of C++ online submissions for Count and Say.

My first solution is recursion, but it's not that efficient!
If considering complexity, take "slicing windows" concept into consideration.
*/

class Solution {
public:
    string countAndSay(int n) {
        
        if (n == 1) return "1";
        
        string s = countAndSay(n-1);
        string r = "";
        char tmp = '0';

        for(auto c: s){
            if (c != tmp) {
                tmp = c;
                r = r + "1" + c;
            }
            else {
                *(r.end()-2) = int(*(r.end()-2)) + 1;
            }
        }
        return r;
    }
};

/* NOTE
    [unordered_map]
    get key     : p->first
    get value   : p->second

    [vector]
    string.at(i) // i not supported with index that out of range (0 ~ string.size()), support only non-negative index value 

    [Regex]
    http://www.cplusplus.com/reference/regex/
    C++ regex solution:
    
    //以後有空可以研究Regex的用法

    string countAndSay(int n) {
        const regex rx_seq("(.)\\1*");
        smatch m;
        string res = "1";
        for (int i = 1; i < n; i++) {
            string tmp = "";
            while (regex_search(res, m, rx_seq)) {
                tmp += to_string(m[0].length()) + ((string)m[0])[0];
                res = m.suffix();
            }
            res = tmp;
        }
        return res;
    }
*/
