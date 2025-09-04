class Solution {
public:
    bool checkPalindrome(string s){
        int n = s.size();
        for(int i=0;i<=n/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        /*
        int count = s.size();

        for(int i=0;i<s.size();i++){
            string str;
            for(int j=i+2;j<=s.size();j++){
                str = s.substr(i,(j-i));
                if(checkPalindrome(str)==true){ 
                    count++;
                }
            }
        }

        return count;
        */

        int n=s.size(), ans=0;

        auto expand = [&](int L, int R) {
            int cnt = 0;
            while (L>=0 && R<n && s[L]==s[R]) {
                ++cnt; 
                --L; 
                ++R;
            }
            return cnt;
        };

        for (int i=0; i<n; ++i) {
            ans += expand(i, i);     
            ans += expand(i, i+1); 
        }
        return ans;
    }
};