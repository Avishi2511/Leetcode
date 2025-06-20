class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
        if(nums.size()==1){
            if(nums[0]==0){
                return 1;
            }
            return 0;
        }
        sort(nums.begin(), nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[0]!=0) return 0;
            if(nums[i]!=nums[i-1]+1){
                return nums[i]-1;
            }
        }   
        
        return nums[nums.size()-1]+1;
        */

        //Brute
        /*
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            int flag = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag == 0) return i;
        }
        
        return 0;
        */

        //Optimal
        /*
        int n = nums.size();
        int sum = (n*(n+1))/2;

        int sum2 = accumulate(nums.begin(), nums.end(), 0);

        return sum- sum2;
        */

        //Brute
        /*
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(i!=nums[i]){
                return i;
            }
        }

        return n;
        */


        //Optimized
        int n = nums.size();

        int sum1 = accumulate(nums.begin(), nums.end(), 0);
        int sum2 = n*(n+1)/2;

        return sum2-sum1;
    }
};