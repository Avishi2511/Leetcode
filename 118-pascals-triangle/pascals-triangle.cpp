class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows*(numRows+1)/2;
        int ans[31][31];

        ans[0][0] = 1;
        ans[1][0] = 1;
        ans[1][1] = 1;

        for(int i=2;i<numRows;i++){
            ans[i][0] = 1;
            ans[i][i] = 1;

            for(int j=1;j<i;j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }

        vector<vector<int>> a(numRows);
        for(int i=0;i<numRows;i++){
           for(int j=0;j<=i;j++){
                a[i].push_back(ans[i][j]);
           }
        }

        return a;
    }
};