class Solution {
public:
    bool check(vector<int>& nums) {
        /*
        //find the original array
        vector<int> sorted(nums.size());
        sorted = nums;
        sort(sorted.begin(), sorted.end());

        int j=0;
        for(int i=0;i<nums.size();i++){
            int start = sorted[0];
            if(nums[i]==start){
                j=i;
                break;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(sorted[i]==nums[j]){
                cout<<j<<endl;
                j++;
            }
            else return false;

            if(j==nums.size()-1){
                j=0;
            }
        }

        return true;
        */
        /*
        vector<int> sorted;
        sorted=nums;
        sort(sorted.begin(),sorted.end());
        
        int n = sorted[0];
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n){
                x = i;
                break;
            }
        }

        for(int i=1;i<nums.size();i++){
            if(sorted[i]==nums[(i+x)%nums.size()]){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
        */

        /*
        int maxDiff = 0;
        int j = 0, l, s;

        vector<int> nums1 = nums;
        sort(nums1.begin(), nums1.end());
        if(nums1 == nums) return true;

        for(int i=0;i<nums.size()-1;i++){
            int diff = nums[i+1] - nums[i];
            if(diff < 0){
                int largest = nums[i];
                int smallest = nums[i+1];
                l = i;
                s = i+1;
            }
        }

        bool right = false;
        for(int i=s;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]) right = true;
            else {right = false; break;}
        }

        bool left = false;
        for(int i=0;i<l-1;i++){
            if(nums[i]<nums[i+1]) left = true;
            else {right = false; break;}
        }

        if(left && right) return true;

        return false;
        */
        int n = nums.size();
        int count = 0;
        
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                count++;
        
        if (nums[n - 1] > nums[0])
            count++;
        
        return count <= 1;


        
    }
};