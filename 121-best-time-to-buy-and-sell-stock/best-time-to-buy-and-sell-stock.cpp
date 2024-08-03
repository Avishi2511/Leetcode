class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        int profit;
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]>prices[i]){
                    profit = prices[j]-prices[i];
                    if(max_profit<profit){
                        max_profit = profit;
                    }
                }
            }
        }

        return max_profit;
        */
        /*
        int l = 0;
        int r=1;
        int profit;
        int max_profit=0;

        while(l<prices.size()-1){
            if(r==prices.size()-1){
                l++;
                r=l+1;
            }
            if(prices[l]>prices[r]){
                l++;
                r++;
            }
            if(prices[l]<prices[r] && r<prices.size()){
                profit=prices[r]-prices[l];
                if(max_profit<profit){
                    max_profit = profit;
                }
                r++;
            }
            cout<<l<<" "<<r<<" "<<profit<<endl;
        }

        return max_profit;
        */

        int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }

        return maxprof;
    }
};