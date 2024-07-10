class Solution {
public:
    int minOperations(vector<string>& logs) {
        int output= 0;

        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../" && output!=0){
                output--;
            }
            else if(logs[i]!="./" && logs[i]!="../"){
                output++;
            }
        }

        return output;
    }
};