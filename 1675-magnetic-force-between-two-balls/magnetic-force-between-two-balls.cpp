class Solution {
public:
    int possible(int mid, vector<int> position){
        int total = 1;
        int curr = position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-curr >=mid){
                total++;
                curr = position[i];
            }
        }
        return total;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int left=0;
        int right = INT_MAX;
        int maxm=0;

        while(left<=right){
            int mid = (left+right)/2;
            if(possible(mid,position) >= m){
                left = mid+1;
                maxm = max(maxm, mid);
            }
            else{
                right = mid-1;
            }
        }
        return maxm;
    }
};