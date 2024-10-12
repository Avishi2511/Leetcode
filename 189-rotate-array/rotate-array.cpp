class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        //Brute Force
        /*
        int n = nums.size();
        for(int i=0;i<k;i++){
            int temp = nums[n-1];
            for(int j=n-2;j>=0;j--){
                nums[j+1] = nums[j];
            }
            nums[0] = temp;
        }
        */

        //Optimized
        /*
        int n = nums.size();
        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        */

        /*
        k = k%n;
        for(int i=k;i<n;i++){
            nums[i] = nums[i-k];
        }

        for(int i=0;i<temp.size();i++){
           nums[i] =  temp[i];
        }
        */
/*
       for (int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // Step 3: Copy the k elements from temp to the front of nums
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
    }
    */
    int n = nums.size();

    if (n <= 1) return;

    // Handle cases where k is larger than n
    k = k % n;

    // Step 1: Copy the last k elements into a temporary array
    std::vector<int> temp(nums.end() - k, nums.end());

    // Step 2: Shift the first n-k elements to the right
    for (int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // Step 3: Copy the k elements from temp to the front of nums
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }

    }
};