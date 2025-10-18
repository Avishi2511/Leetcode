class Solution {
public:
/*
    int convertToDecimal(string s){
        
        int j = 0, nums;
        for(int i=s.size()-1;i>=0;i--){
            nums += s[i]*pow(2,j);
            j++;
        }
        return nums;
        
    }
    */
    
    string addBinary(string a, string b) {
        /*
        int numa, numb;

        numa = converToDecimal(a);
        numb = convertToDecimal(b);
        
        int ans = numa+numb;

        for(int )
        */

        string res;
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';

            res += carry % 2 + '0';
            carry /= 2;
        }

        reverse(begin(res), end(res));
        return res;      

    }
};