class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        //Brute
        int maxMul = nums[0];
        for(int i=0;i<nums.size();i++){
            int mul = 1;
            for(int j=i;j<nums.size();j++){
                mul = mul*nums[j];
                if(mul>maxMul){
                    maxMul = mul;
                }
            }
        }

        return maxMul;
    }
};