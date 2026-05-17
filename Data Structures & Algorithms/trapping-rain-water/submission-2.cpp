class Solution {
public:
    int trap(vector<int>& height) {
        int l = -1, r = height.size();
        int l_max = 0, r_max = 0;
        int area = 0;
        while (l < r) {
            if (l_max < r_max) {
                l++;
                l_max = max(l_max, height[l]);
                area += l_max - height[l];
            }
            else {
                r--;
                r_max = max(r_max, height[r]);
                area += r_max - height[r];
            }
        }
        return area;
    }
};

// Time O(n)
// Space O(1)