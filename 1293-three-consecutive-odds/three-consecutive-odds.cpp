class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int l=0, r=0;
        bool found=true;
        int odd=0;
        while(r<arr.size()){
            if(r>=2){
                l++;
            }
            if(arr[r]%2!=0){
                odd++;
                if(odd==3){
                    return true;
                }
            }
            else{
                found=false;
                odd=0;
            }
            r++;
        }

        return false;
    }
};