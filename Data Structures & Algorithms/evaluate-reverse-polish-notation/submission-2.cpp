class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int res = 0;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                res = b + a;
                stack.push(res);
            } else if (tokens[i] == "-") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                res = b - a;
                stack.push(res);
            } else if (tokens[i] == "*") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                res = b * a;
                stack.push(res);
            } else if (tokens[i] == "/") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                res = b / a;
                stack.push(res);
            } else {
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();
    
    }
};
