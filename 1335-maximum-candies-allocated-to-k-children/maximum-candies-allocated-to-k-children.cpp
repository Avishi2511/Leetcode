class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) { 
        //long long sum = accumulate(candies.begin(), candies.end(), 0);
        int maxm = *max_element(candies.begin(), candies.end());
        
        long long sum = 0;
        for(int i=0;i<candies.size();i++){
            sum += candies[i];
            //maxm = max(maxm,candies[i]);
        }
        

        if(sum<k) return 0;

        int low = 1, high = maxm;

        int mid, ans=0;
        while(low<=high){
            mid = low+(high-low)/2;

            long long piles = 0;
            for(int i=0;i<candies.size();i++){
                piles += candies[i]/mid;
            }

            if(piles >= k) {
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }

        return ans;
    }
};