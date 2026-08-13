class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for (const string& str : strs) {
            int len = str.size();
            result.append(to_string(len));
            result.append("?");
            result.append(str);
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int index = 0;
        while(index < s.size()){
            string len;
            string single;
            while(s[index] != '?'){
                len = len + s[index];
                ++index;
            }
            int length = stoi(len);
            int j = index + 1;
            for(int k = 0; k < length; k++){
                single = single + s[j + k];
            }
            result.push_back(single);
            index = j + length;
        }
        return result;
    }
};
