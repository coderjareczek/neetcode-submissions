class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0;
        stack<pair<int, int>> stack; // <index, height>
        stack.push({0, heights[0]});
        
        for (int i = 1; i < heights.size(); i++) {
            int indexToPush = i;
            while (!stack.empty() && heights[i] < stack.top().second) {
                indexToPush = stack.top().first;
                int area = stack.top().second * (i - stack.top().first);
                res = max(res, area);
                stack.pop();
            }
            stack.push({indexToPush, heights[i]});
        }
        while (!stack.empty()) {
            int area = stack.top().second * static_cast<int>(heights.size() - stack.top().first);
            res = max(res, area);
            stack.pop();            
        }

        return res;
    }
};
