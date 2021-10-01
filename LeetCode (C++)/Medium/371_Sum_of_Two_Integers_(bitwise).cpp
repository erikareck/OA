/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Two Integers.
Memory Usage: 6 MB, less than 56.93% of C++ online submissions for Sum of Two Integers.
*/
class Solution {
public:
    int getSum(int a, int b) { 
        unsigned carry = a&b; //int會不夠大(用一半的空間紀錄singed數值)
        int ans = a^b;
        if (carry==0) return ans;
        carry = carry << 1;
        return getSum(carry, ans);
    }
};
/* Bitwise操作學習文章
https://hackmd.io/@sysprog/c-bitwise
*/