class Solution {
public:
    int maxArea(vector<int>& height) {
        //Brute - Gave TLE
        /*
        int n = height.size();
        int water = 0;
        int maxWater = 0;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int base = j-i;
                if(height[i]<height[j]){
                    water = height[i]*base;
                } else{
                    water = height[j]*base;
                }
                maxWater = max(water,maxWater);
            }
        }

        return maxWater;
        */


        int l=0,r=height.size()-1;
        int maxWater = 0;
        
        while(l<=r){
            int water;
            if(height[l]<height[r]){
                water = height[l]*(r-l);
                l++;
            }
            else{
                water = height[r]*(r-l);
                r--;
            }
            maxWater = max(water,maxWater);
        }

        return maxWater;
    }
};