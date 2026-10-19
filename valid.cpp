class Solution {
public:
    bool isValid(string s) {
        string stk;
        unordered_map<char, char> d{{'(', ')'}, {'[', ']'}, {'{', '}'}};
        for (char c : s) {
            if (d.contains(c)) {
                stk.push_back(d[c]);
            }
    }
};
