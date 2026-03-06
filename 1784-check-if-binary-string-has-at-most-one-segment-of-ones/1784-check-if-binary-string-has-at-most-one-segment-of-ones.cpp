class Solution {
public:
    bool checkOnesSegment(string s) {
        int segCount = 0;

        for(int i=0; i<s.size();i++){
            if(s[i] == '1' && segCount < 1){
                segCount++;
                while(i<s.size() && s[i] == '1'){
                    i++;
                }
            }
            if(s[i] == '1' && segCount >= 1){
                return false;
            }
        }
        return true;
    }
};