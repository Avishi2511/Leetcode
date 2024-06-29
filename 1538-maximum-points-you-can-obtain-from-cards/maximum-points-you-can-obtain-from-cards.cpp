class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        /*
        int l=0, r=k-1;
        int n=cardPoints.size();

        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        l=n-1;
        while(r!=-1){  
            sum+=cardPoints[l];
            sum-=cardPoints[r];
            l--;
            r--;
            if(sum>max_sum){
                max_sum=sum;
            }
        }
        return max_sum;
        */

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
            cout<<sum<<endl;
        }

        return max_sum;
    }
};