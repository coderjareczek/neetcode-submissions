class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        int fleet = 0;
        double last_time = 0.0;
        for (const auto& car : cars) {
            double time = (double)(target - car.first) / car.second;
            if (time > last_time) {
                fleet++;    
                last_time = time;
            }     
        }

        return fleet;
    }
};
