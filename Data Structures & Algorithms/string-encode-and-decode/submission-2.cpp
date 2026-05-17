class Solution {
public:

    string encode(vector<string>& strs) {
        //edge case: empty vector
        if (strs.empty())
            return "";

        //make vector of sizes: sizes = {12, 4}
        vector<int> sizes;
        string res = "";
        for (auto& str : strs) {
            res += to_string(str.size()) + ',';
        }
        res += '#';

        for (auto& str : strs) {
            res += str;
        }            

        return res;
    }

    vector<string> decode(string s) {
        if (s.empty())
            return {};

        vector<int> sizes;
        int i = 0;
        while (s[i] != '#') {
            string str = "";
            while (s[i] != ',') {
                str += s[i];
                i++;  
            }
            sizes.push_back(stoi(str));
            i++;
        }
        i++;

        vector<string> res;
        for (auto size : sizes) {
            res.push_back(s.substr(i, size));
            i += size;
        }    

        return res;
    }
};
