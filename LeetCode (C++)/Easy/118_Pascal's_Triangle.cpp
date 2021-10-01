/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.4 MB, less than 86.55% of C++ online submissions for Pascal's Triangle.
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> row;
        unsigned adder;
        for (unsigned r=0; r<numRows; r++){
            row.clear();
            for (unsigned i=0; i<=r; i++){
                if(i==0 || i==r){
                    row.push_back(1);
                }else{
                    adder = ans.at(r-1).at(i-1) + ans.at(r-1).at(i);
                    row.push_back(adder);
                }
            }
            ans.push_back(row);
        }        
        return ans;
    }
};
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.3 MB, less than 99.45% of C++ online submissions for Pascal's Triangle.
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> row;
        for (unsigned r=0; r<numRows; r++){
            row.clear();
            for (unsigned i=0; i<=r; i++){
                if(i==0 || i==r){
                    row.push_back(1);
                }else{
                    row.push_back(ans.at(r-1).at(i-1) + ans.at(r-1).at(i));
                }
            }
            ans.push_back(row);
        }        
        return ans;
    }
};