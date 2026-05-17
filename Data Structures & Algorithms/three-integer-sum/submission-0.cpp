class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            //solve twosum2
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                if (nums[i] + nums[l] + nums[r] == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l + 1]) l++;
                    while(l < r && nums[r] == nums[r - r]) r--;
                    l++;
                }
                else if (nums[i] + nums[l] + nums[r] > 0) r--;
                else l++;
            }
            while (nums[i] == nums[i + 1] && i < nums.size() - 2) {
                i++;
            }
        }
        return res;
    }
};
