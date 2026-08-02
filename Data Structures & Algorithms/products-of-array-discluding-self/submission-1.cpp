class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int total_product = 1;
        int zero_count = 0;

        for (int n : nums) {
            if (n == 0) {
                zero_count++;
            } else {
                total_product *= n;
            }
        }

        vector<int> sol;

        for (int n : nums) {

            if (zero_count > 1) {
                sol.push_back(0);
            }
            else if (zero_count == 1) {
                sol.push_back(n == 0 ? total_product : 0);
            }
            else {
                sol.push_back(total_product / n);
            }
        }

        return sol;
    }
};
