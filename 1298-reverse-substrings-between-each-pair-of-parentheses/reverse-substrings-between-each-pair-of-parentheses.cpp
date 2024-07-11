class Solution {
public:
    string reverseParentheses(string s) {
        /*
        vector<int> bracket;
        int b=-1;
         for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                bracket.push_back(i);
                b++;
            }
            if(s[i+1]==')'){
                int l=bracket[b]+1;
                int r=i;
                //s.erase(s.begin()+bracket[b]);
                //s.erase(s.begin()+i+1);
                while(l<r){
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
                b--;
            }
        }

        int i=0;
        while(s[i]!=NULL){
            if(s[i]== '(' || s[i]==')'){
                s.erase(s.begin()+i);
                i--;
            }
            i++;
            cout<<s[i];
        }

        return s;
        */

        std::stack<char> stack;
for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    
    if (c == ')') {
        std::string rev = "";
        while (!stack.empty() && stack.top() != '(') {
            rev += stack.top();
            stack.pop();
        }
        if (!stack.empty()) {
            stack.pop(); // pop the opening bracket
        }
        for (int j = 0; j < rev.length(); j++) {
            stack.push(rev[j]);
        }
    } else {
        stack.push(c);
    }
}

std::string result = "";
while (!stack.empty()) {
    result = stack.top() + result;
    stack.pop();
}
return result;
    }
};