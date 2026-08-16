class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int result = 0;
        while(left < right){
            int currentArea = (right - left)*min(heights[left], heights[right]);
            if(heights[left] <= heights[right]){
                // currentArea = (right - left)*heights[left];
                if(currentArea > result){
                    result = currentArea;
                }
                left++;
            }else{
                // currentArea = (right - left)*heights[right];
                if(currentArea > result){
                    result = currentArea;
                }
                right--;
            }
        }
        return result;
    }
};
