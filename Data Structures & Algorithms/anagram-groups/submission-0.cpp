class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            hash[key].push_back(s);
        }

        vector<vector<string>> sol;
        for (auto &h : hash) {
            sol.push_back(h.second);
        }
        return sol;
    }
};
