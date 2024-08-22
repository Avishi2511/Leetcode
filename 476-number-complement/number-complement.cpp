class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;
        int div = num;
        while(div!=0){
            binary.push_back(div%2);
            div = div/2;
        }

        reverse(binary.begin(), binary.end());

        vector<int> comp;
        for(int i=0;i<binary.size();i++){
            if(binary[i]==1) comp.push_back(0);
            if(binary[i]==0) comp.push_back(1);
        }

        int newNum=0;
        for(int i=0;i<comp.size();i++){
            newNum += comp[i]*(pow(2,comp.size()-i-1));
            cout<<newNum<< " ";
        }

        return newNum;
    }
};