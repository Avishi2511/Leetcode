class Solution {
public:
    long long minimumSteps(string s) {
        
        long long steps = 0;
        int countZeros = 0;
        /*
        int i=0;
        int j=s.size()-1;

        while(i<=j){
            if(s[i]=='1' && s[j]=='0'){
                step++;
                i++;
                j--;
            }
            else if (s[i]=='0' && s[j]=='0'){
                i++;
            }
            else if(s[i]=='1' && s[j]=='1'){
                j--;
            }
            else{
                i++;
                j--;
            }
            cout<<j<<endl;
        }
        return step;
        */

        for (int i=0;i<s.length();i++) {
            if (s[i] == '1') {
                countZeros++;
            } else {
                steps += countZeros;
            }
        }

        return steps;
    }
};