class Solution {
public:
    string largestOddNumber(string num) {
        vector<char> ans;
        int j = -1;

        for(int i=num.size()-1;i>=0;i--){
            if(int(num[i])%2!=0){
                j=i;
                break;
            }
        }

        if(j==-1) return "";

        for(int i=0;i<=j;i++){
            ans.push_back(num[i]);
        }

        string sol(ans.begin(), ans.end());
        return sol;
    }
};