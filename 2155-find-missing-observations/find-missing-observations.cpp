class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int total_sum = mean*(m+n);

        int rolls_sum = 0;
        for(int i=0;i<m;i++){
            rolls_sum += rolls[i];
        }

        int missing_sum = total_sum - rolls_sum;

        if(n*6 < missing_sum || missing_sum < n) return {};

        vector<int> sol(n, (missing_sum/n));

        for(int i=1; i<=missing_sum%n; i++) {
            sol[i]++;
        }

        return sol;
        
    }
};