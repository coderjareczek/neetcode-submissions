class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash_map; // key: num, value: quant
    
        for (const auto num : nums) {
            hash_map[num]++; 
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (const auto& pair : hash_map) {
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> result;

        for (int i = bucket.size() - 1; i > 0; i--) {
            for (auto num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k)
                    return result;
            }
        } 
    }
};
