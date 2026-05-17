class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash_table;
        
        for(auto num : nums) {
            if (hash_table.count(num) > 0)
                return true;
            hash_table.insert(num);
        }

        return false;
    }
};
