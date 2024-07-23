class Solution {
public:
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        vector<pair<int,int>> val_freq;

        for(auto m : map) {
            val_freq.push_back(m);
        }

        sort(val_freq.begin(),val_freq.end(),cmp);

        vector<int> result;
        for(auto v : val_freq) {
            for(int i=0;i<v.second;i++) {
                result.push_back(v.first);
            }
        }
        return result;
    }
};