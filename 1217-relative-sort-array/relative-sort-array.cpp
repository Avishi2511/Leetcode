class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        /*
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
        */

        /*
        unordered_map<int,int> map;
        vector<int> output;

        for(size_t i=0;i<arr1.size();i++){
            int n=arr1[i];
            map[n]++;
        }

        for(int i=0;i<arr2.size();i++){
            if(map.count(arr2[i])){
                for(int j=0;j<)
            }
        }
        */

        int a=0;

        for(int i =0; i< arr2.size(); i++){ 
            for(int j= 0; j<arr1.size();j++){      
                if(arr1[j]==arr2[i]){
                    swap(arr1[a],arr1[j]);
                    a++;
                }  
            }
        }
        sort(arr1.begin()+a, arr1.end());
        return arr1;
        
    }
};