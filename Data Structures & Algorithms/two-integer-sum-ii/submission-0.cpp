class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        vector<int> results;
        while(l < r){
            int temp = numbers[l] + numbers[r];
            if(temp == target){
                l = ++l;
                r = ++r;
                results.push_back(l);
                results.push_back(r);
                return results;
            }else if(temp > target){
                r--;
            }else{
                l++;
            }
        }
        return results;
    }
};
