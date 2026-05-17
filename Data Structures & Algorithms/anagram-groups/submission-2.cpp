class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (const auto& s : strs) {
            vector<int> v(26, 0);
            for (auto c : s ) {
                v[c - 'a']++;
            }
            
            string key = to_string(v[0]);
            for (int i = 1; i < 26; i++)
            {
                key += ',' + to_string(v[i]);
            }

            map[key].push_back(s);
        }

        vector<vector<string>> v;
        for (const auto& e : map) {
            v.push_back(e.second);
        }

        return v;
    }
};
