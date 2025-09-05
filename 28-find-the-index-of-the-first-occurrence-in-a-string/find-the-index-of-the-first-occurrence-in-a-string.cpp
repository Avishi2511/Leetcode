class Solution {
public:
    int strStr(string haystack, string needle) {
        /*
        int temp;
        int i=0;
        while(i<haystack.size()){
            bool found=false;
            temp=i;
            for(int j=0;j<needle.size();j++){
                if(needle[j]==haystack[i]){
                    found=true;
                    i++;
                }
                else{
                    found=false;
                    break;
                }
            }
            if(found==true){
                return temp;
            }
            else{
                return -1;
            }
        }

        return -1;
        */


        int nsize = needle.size();
        int hsize = haystack.size();

        for(int i=0;i<hsize;i++){
            string str = haystack.substr(i,nsize);
            if(str == needle){
                return i;
            }
        }

        return -1;
    }

};