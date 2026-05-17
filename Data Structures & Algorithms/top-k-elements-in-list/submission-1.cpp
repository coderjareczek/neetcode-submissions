class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (const auto n : nums) {
            map[n]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& e : map) {
            bucket[e.second].push_back(e.first);
        } 
        vector<int> res;
        for (int i = bucket.size() - 1; i > 0; i--) {
            for (const auto e : bucket[i]) {
                res.push_back(e);
                if (res.size() == k) return res;
            }
        }
        return res;
    }
};
