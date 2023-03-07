class Solution {
public:
    int strStr(string h, string ne) {
        int s1=h.size(),s2=ne.size();
        for(int i=0;i<=s1-s2;i++){
            if(ne==h.substr(i,s2)){
                return i;
            }
        }return -1;
    }
};