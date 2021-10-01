/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
Memory Usage: 5.9 MB, less than 68.52% of C++ online submissions for Sqrt(x).
*/
class Solution {
public:
    int mySqrt(int x) { //binary Search
        int l =0, h=x, m;
        while(l<=h)
        {
            m = l+(h-l)/2;
            long sqr = long(m)*long(m);
            if(sqr == x) return m;
            if(sqr > x) h = m-1;
            else l = m+1;
        }
        return h;
    }
};

class Solution {
public:
    int mySqrt(int x) {
        return floor(pow(x, 0.5));
    }
};
