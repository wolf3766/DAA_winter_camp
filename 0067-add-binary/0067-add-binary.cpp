class Solution {
public:
    string addBinary(string a, string b) {
        while(a.size()<b.size())a='0'+a;
            
        while(a.size()>b.size())b='0'+b;
            
        int carry=0;
        string ans="";
        
        for(int i=a.size()-1;i>=0;i--){
           int num1=a[i]-'0';
           int num2=b[i]-'0';
            
            if(num1+num2+carry==1){
                ans='1'+ans;
                carry=0;
            }else if(num1+num2+carry==2){
                carry=1;
                ans='0'+ans;
            }else if(num1+num2+carry==3){
                ans='1'+ans;
                carry=1;
            }else{
                ans='0'+ans;
                carry=0;
            }
        } 
        if(carry==1){
            ans='1'+ans;
        }
        return ans;
    }
};