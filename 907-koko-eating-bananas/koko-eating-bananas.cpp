class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 1;
        for(int i=0;i<piles.size();i++){
            high = max(high,piles[i]);
        }

        int mid;
        while(low<=high){
            mid = low+(high-low)/2;

            long long totalhrs = 0;
            for(int i=0;i<piles.size();i++){
                if((piles[i]%mid) == 0) totalhrs += (piles[i]/mid);
                else totalhrs += (piles[i]/mid)+1;
            }
            
            if(totalhrs <= h) high = mid-1;
            else low = mid+1;
        }

        return low;
    }
};