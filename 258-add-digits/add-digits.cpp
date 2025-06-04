class Solution {
public:
    int addDigits(int num) {
        int n=0;
        int sum=0;
        int i=1;

        while(1){
            n=num%10;;
            num=num-n;
            num=num/10;
            sum+=n;
            i++;

            if(num==0){
                if((sum/10)==0){
                    break;
                }
                num=sum;
                sum=0;
                i=1;
            }
        }

        return sum;
    }
};