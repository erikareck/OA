/*
Runtime: 4 ms, faster than 67.09% of C++ online submissions for Add Binary.
Memory Usage: 7.2 MB, less than 18.11% of C++ online submissions for Add Binary.
*/
class Solution {
public:
    string addBinary(string a, string b) {
        basic_string<char>::iterator p ;
        basic_string<char>::iterator q ;
        string ans="";
        unsigned adder=0;
        unsigned tmp=0;
        if (a.size()==min(a.size(), b.size())){
            while(a.size()!=b.size())
                a.insert(a.begin(), '0');
        }else{
            while(a.size()!=b.size())
            b.insert(b.begin(), '0');
        }
        p = a.end()-1;
        q = b.end()-1;
        for (unsigned i=0; i<a.size(); i++){
            tmp = adder + unsigned(*(p-i)) - 48 + unsigned(*(q-i)) -48; //char_to_number (ASCII: '0'(48))
            switch (tmp){
                case 3: 
                    ans = "1" + ans;
                    adder = 1;
                    break;
                case 2: 
                    ans = "0" + ans;
                    adder = 1;
                    break;
                case 1:
                    ans = "1" + ans;
                    adder = 0;
                    break;
                default:
                    ans = "0" + ans;
                    adder = 0;
            }
        }
        if (adder == 1) ans = "1" + ans;
        return ans;
    }
};
//Others' Solution
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry=0,sum=0;
        for(int i=a.size()-1,j=b.size()-1;i>=0 || j>=0;){
            if(i>=0){
                sum+=a[i]-48;
            }
            if(j>=0){
                sum+=b[j]-48;
            }
            if(sum==3){
                ans+="1";
                carry=1;
            }else if(sum==2){
                ans+="0";
                carry=1;
            }else if(sum==1){
                ans+="1";
            }else if(sum==0){
                ans+="0";
            }
            i--;
            j--;
            sum=carry;
            carry=0;
        }       
        if(sum){
            ans+="1";
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};