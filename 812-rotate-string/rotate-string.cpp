class Solution {
public:
    bool rotateString(string s, string goal) {
        /*
        if (s.size() != goal.size()) return false;

        string str = s;
        int j = 0;
        for(int i=0;i<goal.size();i++){
            if(goal[i]==s[0]) j=i;
        }

        bool ans = false;
        for(int i=0;i<s.size();i++){
            //str[i] = s[(i+j)%(s.size())];
            str[i] = s[(i - j + s.size()) % s.size()];
            if(str[i]!=goal[i]) return false;
        }

        return true;
        */

        if (s.size() != goal.size()) return false;

    for (int j = 0; j < goal.size(); j++) {   // try every possible alignment
        if (goal[j] == s[0]) {
            string str = s;
            bool ok = true;
            for (int i = 0; i < s.size(); i++) {
                str[i] = s[(i - j + s.size()) % s.size()];
                if (str[i] != goal[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) return true;
        }
    }
    return false;

    }
};