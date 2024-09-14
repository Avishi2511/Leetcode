class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int output = 0;
        for(int i=0;i<words.size();i++){
            string word = words[i];
            bool consistent = true;
            for(int j=0;j<word.size();j++){
                bool letter=false;
                for(int k=0;k<allowed.size();k++){
                    if(word[j]==allowed[k]) letter=true;
                }
                if(letter==false){
                    consistent = false;
                    break;
                }
            }
            if(consistent == true) output++;
        }

        return output;
    }
};