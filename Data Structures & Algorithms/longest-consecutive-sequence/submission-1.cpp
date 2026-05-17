class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //find every posiible begin
        unordered_set<int> set(nums.begin(), nums.end());
        vector<int> first;
        for (const auto n : nums) {
            if (!set.count(n - 1)) first.push_back(n); 
        }
        
        //find lengths
        int longest = 0;    
        for (auto n : first) {
            int cur_long = 1;
            int cur_n = n;
            while (set.count(cur_n + 1)) {
                cur_long++;
                cur_n++;
            }
            longest = max(longest, cur_long);
        }
        
        return longest;
    }
};
