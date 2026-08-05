class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 1;
        int maxLength = 1;
        if(s.empty()){
            return 0;
        }
        unordered_set<char> charSet;
        charSet.insert(s[left]);
        while(right < s.size()){
            while(charSet.contains(s[right])){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            if(charSet.size() > maxLength){
                // maxLength = charSet.size();
                maxLength = max(maxLength, right - left + 1);
            }
            right++;
        }
        return maxLength;
    }
};
