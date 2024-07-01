class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0;
        int n=s.size();
        unordered_map <char,int> map;

        if(n==1){
            return 1;
        }

        int len=0;
        int max_len = 0;
        for(int i=0;i<n;i++){
            char ch = s[i];
            map[ch]++;
            if(map[ch]<=1){
                len++;
            }
            if(len>max_len)
                    max_len = len;
            if(map[ch]>1){
                //if(len>max_len)
                  //  max_len = len;
                for(int j=l;j<i;j++){
                    len--;
                    if(s[j]==ch){
                        l=j+1;
                        break;
                    }
                    map[s[j]]=0;
                }
                len++;
            }
            cout<<max_len<<endl;
        }

        return max_len;
    }
};