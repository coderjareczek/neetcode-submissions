class TimeMap {
    unordered_map<string, vector<pair<string, int>>> map;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        string res = "";
        int l = 0, r = map[key].size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (map[key][mid].second <= timestamp) {
                res = map[key][mid].first;
                l = mid + 1;
            } else {
                r = mid - 1;
            }         
        }
        
        return res;
    }
};
