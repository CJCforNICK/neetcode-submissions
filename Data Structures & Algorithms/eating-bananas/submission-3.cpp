class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        auto max_it = std::max_element(piles.begin(), piles.end());
        int right = *max_it;
        int requireH = 0;
        while(left < right){
            int mid = left + (right - left) / 2;
            requireH = 0;
            for(auto& p : piles){
                requireH += (p + mid - 1) / mid;
            }
            if(requireH <= h){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};
