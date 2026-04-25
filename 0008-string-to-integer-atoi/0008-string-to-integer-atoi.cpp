class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        bool isNeg = false;
        int ans = 0;

        while(true){
            if(s[i] == ' '){
                i++;
            }
            else break;
        }
        
        if(s[i] == '-'){
            isNeg = true;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }

        for(int j = i; j < s.size(); j++){
            if(s[j] - '0' > 9 || s[j] - '0' < 0){
                if(isNeg) return -ans;
                return ans;
            }
            else{
                // handle overflow
                if(ans > INT_MAX/10 || (ans == INT_MAX/10 && (s[j] - '0') > 7)){
                    if(isNeg) return INT_MIN;
                    else return INT_MAX;
                }
                ans = ans * 10 + (s[j] - '0');
            }
        }

        if(isNeg) return ans * -1;
        else return ans;
    }
};