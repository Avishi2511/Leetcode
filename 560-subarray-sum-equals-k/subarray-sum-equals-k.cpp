class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        //CAN'T USE SLIDING WINDOW IN THIS!!!!

        //Brute
        /*
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    cnt++;
                }
                cout<<sum<<endl;
            }
        }

        return cnt;
        */
        /*

        unordered_map<int,int> map;
        map[0] = 1;
        int prefixSum = 0;
        int cnt = 0;

        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            int remove = prefixSum - k;
            cnt += map[remove];
            map[prefixSum] += 1;
        }

        return cnt;
        */



        int subarr = 0;
        
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum += nums[j];
                if(sum==k){
                    subarr++;
                    //break;
                }
            }
        }

        return subarr;

    }
};