class Solution {
public:
    int appendCharacters(string s, string t) {
        /*
        int index=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[j]){
                index++;
                j++;
            }
            else{
                j=0;
            }
        }

        return t.length()-j;
        */

        int i=0;
        int j=0;
    
        while(i<s.length() && j<t.length()) {
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
    
        return t.length()-j;
        
    }
};