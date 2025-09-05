class Solution {
public:
    //Brute - Gave TLE
    /*
    bool checkPalindrome(string s){
        int n = s.size();
        for(int i=0;i<=n/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
    */
    string longestPalindrome(string s) {
        /*
        string ans;
        
        int maxlen = 0;
        for(int i=0;i<s.size();i++){
            string str;
            for(int j=i+1;j<=s.size();j++){
                int len = 1;
                str = s.substr(i,(j-i));
                if(checkPalindrome(str)==true){ 
                    len = str.size();
                }
                if(len>maxlen){
                    maxlen = len;
                    ans = str;
                }
            }
        }

        return ans;
    */

        int n = s.size();
        if (n<=1) return s;

        int start = 0, maxLen = 1;

        auto expand = [&](int l, int r) {
            while (l>=0 && r<n && s[l]==s[r]){
                if (r-l+1>maxLen){
                    start = l;
                    maxLen = r-l+1;
                }
                --l; 
                ++r;
            }
        };

        for (int i=0; i<n; i++) {
            expand(i, i);     
            expand(i, i+1); 
        }

        return s.substr(start, maxLen);
    }
};