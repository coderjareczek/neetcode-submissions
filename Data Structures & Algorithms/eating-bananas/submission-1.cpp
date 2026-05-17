class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // find the biggest number    
        int max = numeric_limits<int>::min();
        for (auto n : piles) max = std::max(max, n);
        int l = 1, r = max;
        int res = max;
        while (l <= r) {
            int k = (r - l) / 2 + l;
            int time = 0;
            for (auto n : piles) {
                time += (n + k - 1) / k; // rounds up
            }
            if (time <= h) {
                res = k;
                r = k - 1;
            }
            else if (time > h) {
                l = k + 1;
            }
        }
        
        return res;
    
    }
};

    // O(nm) ->? O(nlogm)
    // O(1)