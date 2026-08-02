class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }
        vector<pair<int, int>> elements;
        for (const auto& pair : freq){
            elements.push_back({pair.second, pair.first});
        }
        sort(elements.begin(), elements.end(), greater<pair<int,int>>());
        vector<int> results;
        for(int i = 0; i < k; i++){
            results.push_back(elements[i].second);
        }
        return results;
    }
};
