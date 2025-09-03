class Solution {
public:
    int trap(vector<int>& height) {
        /* Brute - Got TLE
        int l = 0;
        int r = 0;
        int water = 0;

        while(l<=r && r<height.size()){
            if(height[l]>height[r]){
                r++;
            }else{
                for(int i=l;i<r;i++){
                    water += height[l]-height[i];
                }
                l=r;
            }
        }

        return water;
        */

        // Optimized, but needs a sweep from right to left to cover all cases
        /*
        int l=0, r=1;
        int water=0;
        int h = height[0];

        while(l<=r && r<height.size()){
            if(height[l]<height[r]){ 
                water += h-height[l];
                l++;
            } else {
                h = height[l];
                r++;
            }
        }
        return water;
        */

        //Optimized
        int n = height.size();
        if(n == 0) return 0;

        int l = 0, r = n - 1;
        int leftMax = height[l], rightMax = height[r];
        int water = 0;

        while(l < r) {
            if(leftMax <= rightMax) {
                l++;
                leftMax = max(leftMax, height[l]);
                water += max(0, leftMax - height[l]);
            } else {
                r--;
                rightMax = max(rightMax, height[r]);
                water += max(0, rightMax - height[r]);
            }
        }

        return water;

    }
};