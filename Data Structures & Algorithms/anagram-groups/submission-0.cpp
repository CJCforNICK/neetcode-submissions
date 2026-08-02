class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        vector<vector<string>> results;
        for(const auto& s : strs){
            string key = s;
            sort(key.begin(), key.end());
            group[key].push_back(s);
        }
        for(auto pair : group){
            results.push_back(pair.second);
        }
        return results;
    }
};
