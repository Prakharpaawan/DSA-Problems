class Solution {
public:
    bool checkString(string s) {
        int count=false;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='b'){
                count=true;
            }
            if(s[i]=='a' && count){
                return false;
            }
        }
        return true;
        
    }
};