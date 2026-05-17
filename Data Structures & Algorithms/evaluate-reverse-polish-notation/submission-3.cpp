class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                a = b + a;
                stack.push(a);
            } else if (tokens[i] == "-") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                a = b - a;
                stack.push(a);
            } else if (tokens[i] == "*") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                a = b * a;
                stack.push(a);
            } else if (tokens[i] == "/") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                a = b / a;
                stack.push(a);
            } else {
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();
    
    }
};
