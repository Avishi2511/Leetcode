class Solution {
public:
    int maxRepeating(string sequence, string word) {
        /*
        int n = sequence.size();
        int m = word.size();
        int i = 0, maxr = 0;
        int repeated = 0;

        while(i<=n-m){
            if(word == sequence.substr(i,m)) {
                repeated++;
                maxr = max(repeated, maxr);
                i += m;
            }
            else {
                repeated = 0;
                i++;
            }
        }
        return maxr;  
        */

        int n=sequence.size();
        int m=word.size();
        if(m>n)return 0;
        int maxi=0;
        int cnt=0;
        for(int i=0;i<=n-m;i++){
            int j=i;
            while(j<n){
                if(sequence.substr(j,m)==word){
                    cnt++;
                    maxi=max(cnt,maxi);
                    // if(j==n-1)break;
                    j=j+m;
                    
                }
                else{
                    cnt=0;
                    break;
                }
                
            }
            cnt=0;
        }
        return maxi;
    
    }
};