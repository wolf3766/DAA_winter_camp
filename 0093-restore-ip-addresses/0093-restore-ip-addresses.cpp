class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        string temp;
        for(int a=1;a<=3;a++){
            for(int b=1;b<=3;b++){
                for(int c=1;c<=3;c++){
                    for(int d=1;d<=3;d++){
                        if(a+b+c+d==s.size()){
                            int st1=stoi(s.substr(0,a));
                            int st2=stoi(s.substr(a,b));
                            int st3=stoi(s.substr(a+b,c));
                            int st4=stoi(s.substr(a+b+c,d));
                            if(st1<=255 && st2<=255 && st3<=255 && st4<=255){
                                temp=to_string(st1)+"."+to_string(st2)+"."+to_string(st3)+"."+to_string(st4);
                                if(temp.size()==s.size()+3){
                                    ans.push_back(temp);
                                }
                            }
                        }
                    }
                }
            }
        } return ans;
    }
};