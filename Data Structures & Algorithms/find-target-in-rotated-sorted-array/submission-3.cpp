class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[left] <= nums[mid]){ // left side is sorted, so find target in left side
                if(nums[left] <= target && target < nums[mid]){ 
                    right = mid - 1; // target is in left side 
                }else{
                    left = mid + 1; // target is in right side
                }
            }else{ // right side is sorted
                if(nums[right] >= target && target > nums[mid]){ 
                    left = mid + 1; // target is in right side 
                }else{
                    right = mid - 1; // target is in right side
                }
            }
        }
        return -1;
    }
};
