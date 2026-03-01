class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(isalnum(ch) && ch != ' '){
                ch = tolower(ch);
                str += ch;
            }
        }


        int low = 0;
        int high = str.size()-1;

        while(low <= high){
            if(str[low] != str[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};