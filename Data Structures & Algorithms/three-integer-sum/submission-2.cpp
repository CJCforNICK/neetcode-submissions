class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> results = {};
        // int fix = 10000000;
        for(int i = 0; i < nums.size(); i++){
            // if(fix == nums[i]){
            //     continue;
            // }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            // fix = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){
                if(nums[i] + nums[left] + nums[right] > 0){
                    right--;
                }else if (nums[i] + nums[left] + nums[right] < 0){
                    left++;
                }else{ //nums[i] + nums[left] + nums[right] == 0
                    results.push_back({nums[i], nums[left], nums[right]});
                    right--;
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }
        return results;
    }
};
