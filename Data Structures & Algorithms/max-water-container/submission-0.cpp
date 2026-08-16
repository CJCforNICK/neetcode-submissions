class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxArea = 0;
        if(heights[left] <= heights[right]){
            maxArea = (right - left)*heights[left];
        }else{
            maxArea = (right - left)*heights[right];
        }
        while(left < right){
            int currentArea;
            if(heights[left] <= heights[right]){
                currentArea = (right - left)*heights[left];
                if(currentArea > maxArea){
                    maxArea = currentArea;
                }
                left++;
            }else{
                currentArea = (right - left)*heights[right];
                if(currentArea > maxArea){
                    maxArea = currentArea;
                }
                right--;
            }
        }
        return maxArea;
    }
};
