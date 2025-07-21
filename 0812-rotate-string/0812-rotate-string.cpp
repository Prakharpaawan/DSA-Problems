class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;

        string doubled = s + s;
        int pos = doubled.find(goal);  
        
        if (pos == -1) {
            return false;
        } else {
            return true;
        }
    }
};
