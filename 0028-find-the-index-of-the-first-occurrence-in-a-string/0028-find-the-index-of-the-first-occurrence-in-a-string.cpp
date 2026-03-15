class Solution {
public:
    int strStr(string haystack, string needle) {
        int Nstart = 0;

        for(int i =0; i<haystack.size(); i++){
            if(haystack[i] == needle[0]){
                int Hstart = i;
                while(Nstart <= needle.size()-1){
                    if(haystack[Hstart] == needle[Nstart]){
                        Hstart++;
                        Nstart++;
                    }
                    else{
                        Nstart = 0;
                        break;
                    }
                }
                if(Nstart == needle.size()) return i;
            }
        }
        return -1;
    }
};