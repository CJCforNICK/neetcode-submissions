class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> days(temperatures.size(), 0);
        stack<int> index;
        for(int i = 0; i < temperatures.size(); i++){ // i: current index
            while(!index.empty() && temperatures[i] > temperatures[index.top()]){
                days[index.top()] = i - index.top();
                index.pop();
            }
            index.push(i);
        }
        return days;
    }
};
