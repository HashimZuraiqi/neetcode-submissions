class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;
        int i = 0;
        for (int num : nums) {
            int remaining = target - num;
            if (index.contains(remaining)) {
                return {index[remaining], i};
            }
            index[num] = i++;
        }
        return {};
    }
};
