class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (const auto& str : strs) {
            res += to_string(str.size()) + '#' + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        
        int i = 0;
        vector<string> res;
        while (i < s.size()) {
            int j = i;
            string cur = "";
            while (s[j] != '#') {
                cur += s[j];
                j++;
            }
            int size = stoi(cur);

            res.push_back(s.substr(j + 1, size));

            i = j + 1 + size;
        }
        
        return res;
    }
};

// Time:
// Space:
