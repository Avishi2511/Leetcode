class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0, rsum=0;
        int n=cardPoints.size();

        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }

        int l=k-1;
        int r=n-1;
        int sum;
        int max_sum=lsum;

        for(int i=0;i<k;i++){
            lsum=lsum-cardPoints[l];
            rsum=rsum+cardPoints[r];
            sum=lsum+rsum;
            if(sum>max_sum){
                max_sum=sum;
            }
            l--;
            r--;
        }

        return max_sum;
    }
};