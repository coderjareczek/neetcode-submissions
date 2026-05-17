class Solution {
public:
    void backtrack(int open, int close, string& stack, vector<string>& res, int n) {
        //add to stack
        if (open == close && open == n) {
            res.push_back(stack);
            return;
        }

        //add "(" // unnecessery if?
        if (open < n) {
            stack.push_back('(');
            backtrack(open + 1, close, stack, res, n);
            stack.pop_back();
        }

        //add ")"
        if (open > close) {
            stack.push_back(')');
            backtrack(open, close + 1, stack, res, n);
            stack.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        string stack;
        vector<string> res;
        backtrack(0, 0, stack, res, n);
        return res;
    }
};


