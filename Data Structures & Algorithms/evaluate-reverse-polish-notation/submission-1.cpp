class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int a;
        int b;
        int result;
        for(auto token : tokens){
            if(token == "+"){
                a = nums.top();
                nums.pop();
                b = nums.top();
                nums.pop();
                result = b + a;
                nums.push(result);
            }else if(token == "-"){
                a = nums.top();
                nums.pop();
                b = nums.top();
                nums.pop();
                result = b - a;
                nums.push(result);
            }else if(token == "*"){
                a = nums.top();
                nums.pop();
                b = nums.top();
                nums.pop();
                result = b * a;
                nums.push(result);
            }else if(token == "/"){
                a = nums.top();
                nums.pop();
                b = nums.top();
                nums.pop();
                result = b / a;
                nums.push(result);
            }else{
                int number = stoi(token);
                result = number;
                nums.push(number);
            }
        }
        return result;
    }
};
