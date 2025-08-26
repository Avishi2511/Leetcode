class Solution {
public:
    /*
    void merge(vector<int>& A, int start, int mid, int end, vector<int>& buff)
    {
        int left=start, right=mid+1;
        int s=end-start+1;
        for(int i=0; i<s; i++)
        {       
            int i0=start+i;
            if(left>mid){
                buff[i0]=A[right];
                right++;
            } else if (right>end){
                buff[i0]=A[left];
                left++;
            } else  if (A[left]<A[right]){
                buff[i0]=A[left];
                left++;
            } else{
                buff[i0]=A[right];
                right++;
            }
        }
        for(int i=start; i<start+s; i++) A[i]=buff[i];
    }
    void mergeSort(vector<int>& A, int start, int end, vector<int>& buff )
    {
        if(end<=start) return;
        int mid=start+(end-start)/2;
        mergeSort(A, start, mid, buff);
        mergeSort(A, mid+1, end, buff);
        merge(A, start, mid, end, buff);
    }
    
    vector<int> sortArray(vector<int>& nums) {
    
        vector<int> buff(nums.size());
        mergeSort(nums, 0, nums.size()-1 ,buff);
        return nums;
    }
    */
    void merge(vector<int>&nums, int low, int mid, int high){
        int left = low;
        int right = mid+1;
        vector<int> temp;

        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }

        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=low;i<=high;i++) nums[i] = temp[i-low];
    }

    void mergeSort(vector<int>&nums,int low,int high){
        if(low>=high) return;
        int mid = (low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }

    vector<int> sortArray(vector<int>& nums){
        //vector<int> temp;
        mergeSort(nums,0,nums.size()-1);
        return nums;

        //Selection Sort
        /*
        for(int i=0;i<nums.size();i++){
            int mini = i;
            for(int j=i;j<nums.size();j++){
                if(nums[j]<nums[mini]){
                    mini = j;
                }
            }
            swap(nums[i],nums[mini]);
        }

        return nums;
        */



        //Bubble Sort
        /*
        for(int i=0;i<nums.size();i++){
            int didSwap = 0;
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    didSwap = 1;
                }
            }

            if(didSwap==0) break;
        }

        return nums;
        */


        //Insertion Sort
        /*
        for(int i=0;i<nums.size();i++){
            for(int j=i;j>0;j--){
                if(nums[j]<nums[j-1]){
                    swap(nums[j],nums[j-1]);
                }
            }
        }

        return nums;
        */

    }
};