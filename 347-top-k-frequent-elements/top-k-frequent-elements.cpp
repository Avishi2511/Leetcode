class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        /*
        unordered_map<int,int> map;
        int ch=nums[0],count=0;

        if(nums.size()==1){
            return nums;
        }

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                map[ch]++;
            }
            else{
                cout<<count<<endl;
                ch=nums[i];
                count = 0;
            }
        }

        vector<pair<int,int>>freq(map.begin(),map.end());

        sort(freq.begin(),freq.end(),[](const pair<char,int>&a, const pair<char,int> &b){
            return a.second>b.second;
        });

        vector<int> sol;
        for(int i=0;i<k;i++){
            sol.push_back(map[nums[i]]);
        }

        return sol;
        */


        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> vec(mp.begin(),mp.end());

        sort(vec.begin(),vec.end(),[](auto &a, auto &b){
            return a.second>b.second;
        });
        
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(vec[i].first);
        }

        return ans;
        
    }
};