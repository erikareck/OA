/*My Solution (use vector method): slower
Runtime: 8 ms, faster than 54.69% of C++ online submissions for Move Zeroes.
Memory Usage: 9 MB, less than 78.56% of C++ online submissions for Move Zeroes.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator p = nums.begin();
        unsigned zero_counter=0;
        while(p != nums.end()){
            if(*p==0) {
                nums.erase(p);
                zero_counter++;
            }else p++;
        }
        for(unsigned i=0; i<zero_counter; i++){
            nums.push_back(0);
        }
        return;
    }
};
/*參考4ms解後自己修改過的解法
Runtime: 4 ms, faster than 94.84% of C++ online submissions for Move Zeroes.
Memory Usage: 9 MB, less than 78.56% of C++ online submissions for Move Zeroes.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        unsigned pointer=0;
        unsigned zero_counter=0;
        for(unsigned i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zero_counter++;
            }else{
                nums[pointer] = nums[i];
                pointer++;
            }
        }
        for(unsigned i=pointer; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};

/*Fastest Solution (Not use vector's method)*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroes = 0;
        int numplace = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeroes++;
            }
            else
            {
                nums[numplace] = nums[i];
                numplace++;
            }
        }
        for (int i=numplace; i<nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};