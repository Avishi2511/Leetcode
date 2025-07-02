class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        //Brute
        long long sum= 0;
        for(int i=0;i<nums.size();i++){
            int min = nums[i];
            int max = nums[i];
            for(int j=i;j<nums.size();j++){
                if(nums[j]<min) min = nums[j];
                if(nums[j]>max) max = nums[j];
                long long range = max - min;
                sum += range;
            }
            cout<<sum<<endl;
        }

        return sum;
    }
};