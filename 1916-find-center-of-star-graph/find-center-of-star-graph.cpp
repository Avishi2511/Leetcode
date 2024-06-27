class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        /*
        int rows = edges.size()/edges[0].size();
        int cols = edges[0].size();

        for(int i=0;i<rows;i++){

        }
        */

        if(edges[0][0]==edges[1][0]){
            return edges[0][0];
        }
        else if(edges[0][1]==edges[1][0]){
            return edges[0][1];
        }
        else if(edges[0][0]==edges[1][1]){
            return edges[0][0];
        }
        else if(edges[0][1]==edges[1][1]){
            return edges[0][1];
        }

        return 0;
    }
};