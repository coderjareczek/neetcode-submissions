class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_map;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (hash_map.count(num))
                return {hash_map[num], i};
            hash_map[target - num] = i;
        }
    }
};
