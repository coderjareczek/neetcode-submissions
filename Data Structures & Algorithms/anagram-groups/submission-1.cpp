class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for (auto s : strs) {
            string r = s;
            sort(r.begin(), r.end());
            map[r].push_back(s);
        }

        vector<vector<string>> v;
        for (auto e : map) {
            v.push_back(e.second);
        }

        return v;
    }
};
