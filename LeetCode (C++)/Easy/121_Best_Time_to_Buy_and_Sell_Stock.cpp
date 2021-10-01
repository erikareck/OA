/* My first Soluction O(n)
Runtime: 108 ms, faster than 46.26% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 93.3 MB, less than 38.40% of C++ online submissions for Best Time to Buy and Sell Stock.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_p = INT_MAX, max = 0;
        for (int i = 0; i<prices.size(); i++){
            if (prices[i] < min_p) min_p = prices[i];
            if ((prices[i] - min_p) > max){
                max = prices[i]-min_p;
            }
        }
        return max;
    }
};
//Others' Best Solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,minPrice=INT_MAX;
        for(auto i :prices) {
            minPrice=min(minPrice, i);
            maxProfit = max(i-minPrice, maxProfit); //一定是後面的Index-之前的，然後再跟暫存的MaxProfit做比較
        }
        return maxProfit;
    }
};