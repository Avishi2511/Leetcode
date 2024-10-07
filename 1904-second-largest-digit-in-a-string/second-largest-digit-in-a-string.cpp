class Solution {
public:
    int secondHighest(string s) {
        vector<int> digits;

        int j=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) digits.push_back(s[i]-'0');
        }

        if(digits.size()==0) return -1;

        int largest = digits[0];
        int second_largest = -1;
        for(int i=1;i<digits.size();i++){
            if(digits[i]>largest) {
                second_largest = largest;
                largest = digits[i];
            }
            else if(digits[i]<largest && digits[i]>second_largest) second_largest = digits[i];
        }

        return second_largest;
    }
};