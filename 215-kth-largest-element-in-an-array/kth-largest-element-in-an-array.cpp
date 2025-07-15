class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //Naive
        /*
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
        */

        //Using heap

        priority_queue<int> pq;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }

        int i=0,klargest;
        while(i!=k){
            klargest = pq.top();
            pq.pop();
            i++;
        }

        return klargest;
    }
};