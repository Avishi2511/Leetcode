class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //Brute
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            bool found = false;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(j==nums2.size()-1){
                        found = true;
                        ans.push_back(-1);
                        break;
                    }
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }
                }
            }
            if(found==false) ans.push_back(-1);
        }

        return ans;
    }
};