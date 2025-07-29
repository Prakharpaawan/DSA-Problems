class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxcount=0;
        int i=0;
        for (char c:s){
        if(c=='('){
            count+=1;
            maxcount=max(count,maxcount);
        }
        else if (c==')') {
            count-=1;
        }
        
    }
    return maxcount;

    }
};