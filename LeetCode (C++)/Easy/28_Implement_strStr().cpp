/*
Runtime: 4 ms, faster than 68.11% of C++ online submissions for Implement strStr().
Memory Usage: 6.8 MB, less than 91.94% of C++ online submissions for Implement strStr().
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (haystack.size() < needle.size()) return -1;
        int i = 0; // needle index
        for (int j=0; j<haystack.size(); j++){
            if (haystack.size()-j < needle.size()-i) return -1;               
            if (i < needle.size()){
                if (haystack[j] == needle[i]){
                    if (i == needle.size()-1) return j-needle.size()+1;
                    else i++;
                }else {
                    j -= i;
                    i=0;
                }
            }
        }
        return -1;
    }
};

//Solution in C (Can learn the logic from it)
/*
    int strStr(char * haystack, char * needle){
        int len1=strlen(haystack);
        int len2=strlen(needle);
        
        for(int i=0;i<=len1-len2;i++){
            int j;
            for(j=0;j<len2;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==len2){
                return i;
            }
        }
        return -1;
    }
*/