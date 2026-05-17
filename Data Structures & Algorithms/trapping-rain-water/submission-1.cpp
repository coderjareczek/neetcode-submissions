class Solution {
public:
    int trap(vector<int>& height) {
        vector<pair<int, int>> maxes(height.size()); // pair<max_l, max_r>
        maxes[0].first = height[0];
        for (int i = 1; i < height.size(); i++) {
            maxes[i].first = max(maxes[i - 1].first, height[i]);
        }
        maxes[height.size() - 1].second = height[height.size() - 1];
        for (int i = height.size() - 2; i >= 0; i--) {
            maxes[i].second = max(maxes[i + 1].second, height[i]);
        }

        int res = 0;
        for (int i = 0; i < height.size(); i++) {
            res += min(maxes[i].first, maxes[i].second) - height[i]; 
        }
        return res;
    }
};

// Time O(n)
// Space O(n)