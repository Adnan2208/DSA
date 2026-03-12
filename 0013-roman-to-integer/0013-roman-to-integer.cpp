class Solution {
public:

    int getRomanValue(char s){
        if(s == 'I') return 1;
        else if(s == 'V') return 5;
        else if(s == 'X') return 10;
        else if(s == 'L') return 50;
        else if(s == 'C') return 100;
        else if(s == 'D') return 500;
        else if(s== 'M') return 1000;
        else return 0;
    }

    int romanToInt(string s) {
        int total = 0;
        for(int i=0; i<s.size(); i++){

            if((i < s.size()-1 && getRomanValue(s[i]) >= getRomanValue(s[i+1]) || i == s.size()-1)){
                total += getRomanValue(s[i]);
            }
            else if(i < s.size()-1 && getRomanValue(s[i]) < getRomanValue(s[i+1])){
                total -= getRomanValue(s[i]);
            }
            
        }
        return total;
    }
};