class Solution {
public:
    string longestPalindrome(string s) {

        /*
        int n = s.size();
        for(int l=n-1;l>=0;l--){ //String length
            int start = 0;
            int end = l-i;
            while(start<end && start<n){
                bool palindrome = false;
                for(i=start;i<end/2;i++){
                    if(s[i]==s[end-i-1]){
                        palindrome = true;
                        len++;
                    } else{
                        palindrome = false;
                        break;
                    }
                }
                start++;
            }
        }
        */

        int n = s.size();
        int maxLen = 1;
        int startIndex = 0;

        for(int l=n;l>0;l--) { 
            for(int start=0;start+l<=n;start++) {
                int end = start + l - 1;
                bool palindrome = true;

                for(int i=0;i<l/2;i++) {
                    if(s[start+i] != s[end-i]) {
                        palindrome = false;
                        break;
                    }
                }

                if (palindrome && l>maxLen) {
                    maxLen = l;
                    startIndex = start;
                }
            }
        }

        return s.substr(startIndex, maxLen);
    }
};