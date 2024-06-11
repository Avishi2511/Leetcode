class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> output;

        int index=0;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    output.push_back(arr1[j]);
                    arr1.erase(arr1.begin()+j);
                    index++;
                    j--;
                }
            }
        }

        sort(arr1.begin(), arr1.end());
        for(int i=0;i<arr1.size();i++){
            output.push_back(arr1[i]);
        }

        return output;
    }
};