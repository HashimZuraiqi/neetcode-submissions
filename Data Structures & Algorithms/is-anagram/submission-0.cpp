class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> exists;
        if (s.size() != t.size()) return false;
        for (char c : s) {
            exists[c]++;
        }
        for (char c : t) {
            if (--exists[c] < 0) return false;
        }
        return true;
    }
};
