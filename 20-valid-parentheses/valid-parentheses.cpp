class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int n = s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
                stack.push(s[i]);
            }
            else{
                if(!stack.empty()){
                    if(s[i]==')' && stack.top()=='('){
                        stack.pop();
                    }
                    else if(s[i]=='}' && stack.top()=='{'){
                        stack.pop();
                    }
                    else if(s[i]==']' && stack.top()=='[' ){
                        stack.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }

        return stack.empty();
    }
};