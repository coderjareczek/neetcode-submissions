class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        unordered_set<char> set;
        int len = 0;
        int cur = 0;
        while (r < s.length()) {
            if (set.count(s[r])) {
                set.erase(set.find(s[l]));
                l++;
                cur--;
            } else {
                cur++;
                set.insert(s[r]);
                r++;
            }

            len = max(len, cur);
        }
        return len;
    }
};
