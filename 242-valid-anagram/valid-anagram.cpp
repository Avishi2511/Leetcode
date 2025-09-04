class Solution {
public:
    bool isAnagram(string s, string t) {
        /* Brute
        if(s.size()!=t.size()) return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]) continue;
            else return false;
        }
        return true;
        */

        //Optimized

        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp;

        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }

        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])>=1){
                mp[s[i]]--;
            }
            else{
                break;
            }
            cout<<mp[t[i]]<<endl;
        }

        for (auto &p : mp) {
            if (p.second >= 1) return false;
        }

        return true;
    }
};