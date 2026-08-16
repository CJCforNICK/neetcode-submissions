class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> fleet;
        vector<pair<int, int>> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        for(auto& car : cars){
            double curTime = static_cast<double>(target - car.first) / car.second;
            if(fleet.empty() || curTime > fleet.top()){
                fleet.push(curTime);
            }else{
                continue;
            }
        }
        return fleet.size();
    }
};
