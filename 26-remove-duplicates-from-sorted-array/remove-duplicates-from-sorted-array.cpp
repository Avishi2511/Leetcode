class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        int j=0;
        int i=0;
        while(j<nums.size()){
            if(nums[j]>nums[i]){
                /*
                int *temp=&nums[i+1];
                nums[i+1]=nums[j];
                &nums[j]=*temp;
                swap(nums[i+1],nums[j]);
                i++;
            }
            j++;
        }
        int k=i+1;
        return k;
        */

        int j = 0;
        int k = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]){
                j++;
                nums[j] = nums[i+1];
                k++;
            }
        }

        return k;
    }
};