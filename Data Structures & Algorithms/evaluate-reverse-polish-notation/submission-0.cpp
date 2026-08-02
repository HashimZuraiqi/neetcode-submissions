class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (string t : tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int num2 = nums.top();
                nums.pop();

                int num1 = nums.top();
                nums.pop();

                int val = 0;
                if (t == "+") {
                    val = num1 + num2;
                }
                else if (t == "-") {
                    val = num1 - num2;
                }
                else if (t == "*") {
                    val = num1 * num2;
                }
                else {
                    val = num1 / num2;
                }
                nums.push(val);

            }
            else {
                nums.push(stoi(t));
            }
        }
        return nums.top();
    }
};
