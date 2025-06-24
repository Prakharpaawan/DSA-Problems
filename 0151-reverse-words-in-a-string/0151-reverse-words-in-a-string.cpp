class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string answer="";
        bool word_added = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } else {
                if(!temp.empty()) {
                    if(word_added) answer.push_back(' ');
                    for(int j=temp.size()-1;j>=0;j--) {
                        answer.push_back(temp[j]);
                    }
                    word_added=true;
                    temp.clear(); 
                }
            }
        }
        if(!temp.empty()){
            if(word_added) answer.push_back(' ');
            for(int j=temp.size()-1;j>=0;j--) {
                answer.push_back(temp[j]);
            }
        }
        return answer;
    }
};
