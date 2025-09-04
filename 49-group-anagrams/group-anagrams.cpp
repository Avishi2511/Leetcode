class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Brute - got TLE
        /*
        int n = strs.size();
        vector<vector<string>> ans;
        vector<bool> visited(n,false);

        for(int i=0;i<n;i++) {
            if(visited[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            string sortedi = strs[i];
            sort(sortedi.begin(), sortedi.end());

            for(int j=i+1; j<n; j++) {
                if(!visited[j]) {
                    string sortedj = strs[j];
                    sort(sortedj.begin(), sortedj.end());

                    if(sortedi == sortedj) {
                        group.push_back(strs[j]);
                        visited[j] = true;
                    }
                }
            }

            ans.push_back(group);
        }
        return ans;
        */


        unordered_map<string,vector<string>> mp;

        for(string s:strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto &p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};