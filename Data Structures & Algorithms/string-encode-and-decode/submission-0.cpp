class Solution {
public:

    string encode(vector<string>& strs) {
        string s;

        for (string &str : strs) {
            s += str + "-";
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        string temp;

        for (char c : s) {
            if (c == '-') {
                sol.push_back(temp);
                temp.clear();
            } else {
                temp += c;
            }
        }

        return sol;
    }
};
