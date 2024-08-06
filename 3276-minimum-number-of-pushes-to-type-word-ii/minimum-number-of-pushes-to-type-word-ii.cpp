class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> map;

        for(int i=0;i<word.size();i++){
            map[word[i]]++;
        }

        vector<pair<char, int>> freq(map.begin(), map.end());

        sort(freq.begin(), freq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        int pushes = 0;
        int i=0;
        int j=1;
        while(i<freq.size()){
            if(i%8==0 && i!=0){
                j++;
            }
            pushes+=freq[i].second*j;
            cout<<freq[i].second*j<<endl;
            i++;
        }
        return pushes;
    }
};