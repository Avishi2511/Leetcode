class Solution {
public:
    int passThePillow(int n, int time) {
        int t=time/(n-1);
        int r=time%(n-1);

        if(t%2!=0)
            return n-r;
        else
            return r+1;

        return 0;
    }
};