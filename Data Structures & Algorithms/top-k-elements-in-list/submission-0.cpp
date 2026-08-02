class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> count;
        for (int n : nums) {
            count[n]++;
        }
        vector<vector<int>> freq(nums.size() + 1);

        for (auto &p : count) {
            freq[p.second].push_back(p.first);
        }

        vector<int> sol;

        for (int i = freq.size() - 1; i >= 0 && sol.size() < k; --i) {
            for (int n : freq[i]) {
                sol.push_back(n);
                if (sol.size() == k) break;
            }
        }

        return sol;
    }
};
