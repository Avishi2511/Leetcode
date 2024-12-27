class Solution {
public:
/*
    int maxscore(vector<int>& values, int max, int i, int j){
        
        int sum = values[i]+values[j]+i-j;
        if(sum<max || i>=values.size()-2){
            return 0;
        }
        if(j==values.size()-1){
            return maxscore(values, sum, i+1, i+2);
        }else{
            return maxscore(values, sum, i, j+1);
        }

        return max;
    
    }
    */
    int maxScoreSightseeingPair(vector<int>& values) {
        /*
        int max = 0;
        for(int i=0;i<values.size()-1;i++){
            int j = i+1;
            while(j<values.size()){
                int val = values[i]+values[j]-(j-i);
                if(val>max) max = val;
                j++;
            }
        }

        return max;
        

        return maxscore(values, 0, 0, 0);
        */

        int sum = 0;
        int prev = values[0];
        for(int i=1;i<values.size();i++){
            sum = max(sum, prev + values[i]- i);
            prev = max(prev, values[i] + i);
        }
        return sum;
    }
};