class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //Brute
        /*
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
        */

        //Better
        /*
        stack<int> st;
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for (int i = 0; i < n1; i++) {
            int j = 0;
            while (j < n2 && nums2[j] != nums1[i]) {
                j++;
            }
            j++;
            while (j < n2) {
                if (nums2[j] > nums1[i]) {
                    st.push(nums2[j]);
                    break;
                }
                j++;
            }

            if (st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());

            while (!st.empty()) st.pop();
        }

        return ans;
        */

        //Optimal

        unordered_map<int, int> map;
        stack<int> st;

        for (int i=0;i<nums2.size();i++) {
            while (!st.empty() && nums2[i] > st.top()) {
                map[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        vector<int> ans;
        for (int i=0;i<nums1.size();i++) {
            if (map.count(nums1[i]))
                ans.push_back(map[nums1[i]]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};