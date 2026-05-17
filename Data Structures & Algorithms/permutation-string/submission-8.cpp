class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> map1, map2;

        // Fill map1 with frequencies of s1
        for (char c : s1) {
            map1[c]++;
        }

        // Initialize map2 with the first window in s2
        for (int i = 0; i < s1.size(); i++) {
            map2[s2[i]]++;
        }

        // Check for matches in sliding window
        for (int r = s1.size(); r < s2.size(); r++) {
            if (map1 == map2) return true;

            // Slide the window
            char newChar = s2[r];
            char oldChar = s2[r - s1.size()];

            map2[newChar]++;
            map2[oldChar]--;

            // Remove character from map2 if its count is zero
            if (map2[oldChar] == 0) {
                map2.erase(oldChar);
            }
        }

        // Final check for the last window
        return map1 == map2;
    }
};
