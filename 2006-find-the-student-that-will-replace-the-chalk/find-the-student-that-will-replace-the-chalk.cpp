class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        /*
        int i=0;
        while(chalk[i]<=k){
            k = k - chalk[i];
            i++;
            if(i==chalk.size()){
                i=0;
            }
        }
        return i;
        */
        long sum = 0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        k=k%sum;
        for(int i=0;i<chalk.size();i++){
            k -= chalk[i];
            if(k<0) return i;
        }
        return 0;
    }
};