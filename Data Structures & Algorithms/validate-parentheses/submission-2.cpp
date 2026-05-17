class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') 
                stack.push(c);
            else if (c == ')') {
                if (stack.size() == 0) return false;
                if (stack.top() == '(') stack.pop();
                else return false;
            }
            else if (c == ']') {
                if (stack.size() == 0) return false;
                if (stack.top() == '[') stack.pop();
                else return false;
            }
            else if (c == '}') {
                if (stack.size() == 0) return false;
                if (stack.top() == '{') stack.pop();
                else return false;
            }
        }
        return !stack.size();
    }
};
