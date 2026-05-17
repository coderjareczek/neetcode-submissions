class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //find every posiible begin
        unordered_set<int> set(nums.begin(), nums.end());
        vector<int> first;
        int longest = 0;    

        for (const auto n : nums) {
            if (!set.count(n - 1)) {
                int length = 1;
                while (set.count(n + length)) {
                    length++;
                }
                longest = max(longest, length);
            } 
        }

        
        return longest;
    }
};
