class Solution {
public:
    int operations(int n, int cpy, int chars){
        if(chars>n){
            return INT_MAX/2;
        }
        if(chars==n){
            return 0; 
        }
        int copy = 2 + operations(n, chars, chars*2);
        int paste = 1 + operations(n, cpy, chars+cpy);
 
        return min(copy, paste);
    }
    int minSteps(int n) {
        if(n==1) return 0;

        return 1+operations(n, 1, 1);
    }
};