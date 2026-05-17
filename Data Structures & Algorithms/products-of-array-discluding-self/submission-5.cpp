class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    // [1, 2, 4, 6]
    // [okay]
    // [1, 2, 8, 48]
    // [48, 48, 24 ,6]
    // [48, 1*24, 2*6, 1*8]

    // [-1, 0, 1, 2, 3] <-
    // [-1, 0, 0, 0, 0] ->
    // [0, 0, 6, 6, 3]
    // [0, -6, 0, 0, 0] let's code it
    vector<int> forw{nums[0]};

    for (int i = 1; i < nums.size(); i++) {
        int prod = forw[i - 1] * nums[i];
        forw.push_back(prod);
    }
    // {1, 2, 8, 48}
    vector<int> back(nums.size(), 1);
    back[nums.size() - 1] = nums[nums.size() - 1];
    for (int i = nums.size() - 2; i >= 0; i--) {
        int prod = back[i + 1] * nums[i];
        back[i] = prod;
    }
    // {48, 48, 24, 6}
    vector<int> res{back[1]};
    for (int i = 1; i < nums.size() - 1; i++) {
        res.push_back(forw[i - 1] * back[i + 1]);
    }
    res.push_back(forw[nums.size() - 2]);
    // {48, 24...}
    return res;
    }
};
