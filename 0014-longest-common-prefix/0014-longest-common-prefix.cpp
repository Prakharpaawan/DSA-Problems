class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0]; // Assume first string is the prefix

        for (int i = 1; i < strs.size(); i++) {
            // Keep reducing prefix until it matches the start of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back(); // Remove last character
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};
