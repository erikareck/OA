/* My First Solution: [unordered_map]
Runtime: 16 ms, faster than 46.09% of C++ online submissions for Find the Duplicate Number.
Memory Usage: 12.8 MB, less than 16.47% of C++ online submissions for Find the Duplicate Number.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> Map;
        for (auto num: nums){
            if (Map.find(num) == Map.end())
                Map.insert({num,1}); //unordered_map用的是insert(), vector才用push_back()
            else
                return num;
        }
        return -1;
    }
};
/* My Revised Version After referece other's solution: memset()
Runtime: 4 ms, faster than 98.72% of C++ online submissions for Find the Duplicate Number.
Memory Usage: 11.1 MB, less than 70.13% of C++ online submissions for Find the Duplicate Number.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[nums.size()+1];
        memset(arr, 0, sizeof(arr));
        for(auto num: nums)
            arr[num]++;
        for(unsigned i=1; i<=nums.size(); i++)
            if(arr[i]>1) return i;
        return -1;
    }
};

/* Method Learning from others: memset()
http://www.cplusplus.com/reference/cstring/memset/

Fill block of memory
Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).

    [Args]
    ptr:    Pointer to the block of memory to fill.
    value:  Value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
    num:    Number of bytes to be set to the value. size_t is an unsigned integral type.
*/
class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int f[n.size()+1]; //save duplicate num +1 space needed
        memset(f,0,sizeof(f));
        for(int i=0;i<n.size();i++)
        f[n[i]]++;
        for(int i=1;i<=n.size();i++)
        {
            if(f[i]>=2)
                return i;
        }
        return 1;
    }
};
/* 0ms ans*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //方法的缺點:改動到原本Nums裡面存放的值
       for(int i = 0; i < nums.size(); i++){  //第一次遍历，将数组元素对应的索引加n
            int index = (nums[i] - 1) % nums.size(); //索引
            nums[index] = nums[index] + nums.size(); //重複的數值在所對印的num[i]會加上兩次以上的nums.size()，故下方的判別為>2*nums.size()
        }

        for(int i = 0; i < nums.size(); i++){  //若有重复的数字出现，数组必定大于2n
            if(nums[i] > 2*nums.size()) //索引值+1 即為重複的數字
                return i+1;
        }
        return 0;
    }
};