class Solution {
public:
    int nthUglyNumber(int n) {
        /*
        vector<int> nos;
        nos.push_back(1);
        int i=1;
        int size=0;
        while(size<=n){
            bool ugly = false;
            for(int j=2;j<n;j++){
                if((i%j == 0) && (j==2 || j==3 || j==5)){
                    ugly = true;
                }
                else {
                    ugly = false;
                    break;
                }
            }
            if(ugly == true){
                size++;
            }
            i++;  
            cout<<i<<" ";    
        }
        return nos[n-1];
        */


         vector<int>arr(n+1);
        arr[1]=1;

        int a=1;
        int b=1;
        int c=1;
        for(int i=2;i<=n;i++){
            int i1= arr[a]*2;
            int i2= arr[b]*3;
            int i3= arr[c]*5;
            int num = min({i1,i2,i3});
            arr[i]=num;
            if(num==i1)  a++;
            if(num==i2)  b++;
            if(num==i3)  c++;
        }
        return arr[n];
    }
};