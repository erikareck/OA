/*
Runtime: 4 ms, faster than 42.75% of C++ online submissions for Happy Number.
Memory Usage: 6.4 MB, less than 5.47% of C++ online submissions for Happy Number.
*/

class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1) return true;

        map<int,int> mp;
        int i=0;//first time there is no element in mp
        
        while(i==0||mp.find(n)==mp.end()){ //end while equals existing "loop" than return false
            i++;
            mp[n]++;
            
            int num=0;
            while(n>0){
                num+=(n%10)*(n%10); //squared residual
                n/=10;
            }
               
            n=num;
            if(n==1){
                return true;
            }
        }
      
        return false; //end while equals existing "loop" than return false
    }
};
