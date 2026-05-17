class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> output;
    //edge case: array = {0}
    //if (nums == {0})
        //return {0};     
    //brute force
    for (int i = 0; i < nums.size(); i++) {
        int product = 1;
        for (int j = 0; j < nums.size(); j++) {
            if (j != i) {
                product *= nums[j];
            }
        }
        output.push_back(product);
    }    
    return output;
    }
};
