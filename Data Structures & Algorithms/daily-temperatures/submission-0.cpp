class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stack; // <temp, index>
        vector<int> res(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && temperatures[i] > stack.top().first) {
                res[stack.top().second] = i - stack.top().second;
                stack.pop();
            } 
            stack.push({temperatures[i], i});
        }
        return res;
    }
};
