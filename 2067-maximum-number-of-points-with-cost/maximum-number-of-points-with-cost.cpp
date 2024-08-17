class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int rows = points.size();
        int cols = points[0].size();
        vector<long long> dp(cols, 0);

        for(int i=0;i<cols;i++){
            dp[i] = points[0][i];
        }

        for(int i=1;i<rows;i++){
            vector<long long> leftMax(cols, 0), rightMax(cols, 0);
            vector<long long> newDp(cols, 0);
            
            leftMax[0] = dp[0];
            for(int j=1;j<cols;j++) {
                leftMax[j] = max(leftMax[j-1], dp[j] + j);
            }
            
            rightMax[cols-1] = dp[cols-1] - (cols-1);
            for(int j=cols-2;j>=0;j--) {
                rightMax[j] = max(rightMax[j+1], dp[j] - j);
            }
            
            for(int j=0;j<cols;j++) {
                newDp[j] = max(leftMax[j] - j, rightMax[j] + j) + points[i][j];
            }
            
            dp = newDp;
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};