class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    // [1, 2, 4, 6]
    // {'1', 1, 2, 8}; {48, 24, 6, '1'}
    vector<int> res{1};
    for (int i = 1; i < nums.size(); i++) {
        res.push_back(res[i - 1] * nums[i - 1]);
    }   
    // {1, 1, 2, 8}
    int tmp = 1;
    for (int i = res.size() - 2; i >= 0; i--) {
        tmp *= nums[i + 1];
        res[i] *= tmp;
    }

    return res;
    }
};
