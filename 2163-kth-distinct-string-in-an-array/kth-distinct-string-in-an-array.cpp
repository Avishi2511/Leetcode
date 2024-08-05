class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> map;
        vector<string> sol;

        for (const string &str : arr) {
            map[str]++;
        }

        for (const string &str : arr) {
            if (map[str] == 1) {
                sol.push_back(str);
            }
        }

        string s;
        if(sol.size()<k) return "";
        else s = sol[k-1];

        return s;
    }
};