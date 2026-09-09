class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int, double>> cars(n);
        for (int i=0; i<n; i++) {
            cars[i]={position[i], static_cast<double>(target-position[i])/speed[i]};
        }
        sort(cars.begin(), cars.end(), [](const auto& a, const auto& b) {
            return a.first>b.first;
        });
        int fleets=0;
        double cur_fleet_time=0.0;

        for (int i=0; i<n; i++) {
            double time=cars[i].second;
            if(time>cur_fleet_time){
                fleets++;
                cur_fleet_time=time;
            }
        }
        return fleets;
    }
};
