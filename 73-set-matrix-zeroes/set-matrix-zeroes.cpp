class Solution {
public:
    void zero(vector<vector<int>>& matrix, int r, int c){
        for(int i=0;i<matrix[0].size();i++){
            matrix[r][i] = 0;
        }

        for(int i=0;i<matrix.size();i++){
            matrix[i][c] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        //Brute
        int m = matrix.size();
        int n = matrix[0].size();
        int r,c;
        vector<vector<int>> zeroIndex;

        //unordered_map <int,pair<int,int>>

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) {
                    r = i;
                    c = j;
                    zeroIndex.push_back({r,c});
                }
            }
        }
        for(int i=0;i<zeroIndex.size();i++){
            zero(matrix, zeroIndex[i][0], zeroIndex[i][1]);
        }
    }
};