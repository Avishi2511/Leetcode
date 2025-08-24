class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        /* TLE
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int children = 0;
        int lastAssigned = -1;

        for(int i=0;i<g.size();i++){
            for(int j=lastAssigned+1;j<s.size();j++){
                if(s[j]>=g[i]){
                    lastAssigned=j;
                    children++;
                    break;
                }
            }
        }

        return children;
        */

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int children = 0;

        int i=0,j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                children++;
                i++;
            }
            cout<<j<<endl;
            j++;
        }

        return children;

    }
};