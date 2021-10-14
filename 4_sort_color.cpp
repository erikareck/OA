class Solution {
public:
    void sortColors(vector<int>& nums) {
        len=nums.len();
        int r=0, w=0, n=len-1;
        while(w<=b){
            int curr=nums[w];
            if (curr==0){
                swap(w,r);
                r++;
                w++;
            }else if (cur==1){
                w++;
            }else{
                swap(w,b);
                b--;
            }
        }
        return;
    }
    void swap(int *a, int *b){
        int tmp=a;
        a=b;
        b=tmp;
        return;
    }               
}
