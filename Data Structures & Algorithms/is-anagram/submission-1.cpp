class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> anagram;
        if(s.length()!=t.length()){
            return false;
        }
        for(char x:s){
            anagram[x]++;
        }
        for(char x:t){
            anagram[x]--;
        }
        for(auto pair : anagram){
            if(pair.second!=0){
                return false;
            }
        }
        return true;
    }
};
