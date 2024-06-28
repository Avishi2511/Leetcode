class Solution {
public:
    bool static compare(const pair<long long, long long>& a, const pair<long long, long long>& b) {
        return a.second > b.second; 
    }

    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long rows = roads.size();
        unordered_map<long long,long long> map;
        for(long long i=0;i<rows;i++){
            for(long long j=0;j<2;j++){
                long long k = roads[i][j];
                map[k]++;
            }
        }
        vector<pair<long long, long long>> freq(map.begin(), map.end());
        sort(freq.begin(), freq.end(), compare);

        long long sum=0;
        long long i=n;
        for (const auto& pair : freq){
            sum+=pair.second*i;
            i--;
        }

        return sum;
    }
};