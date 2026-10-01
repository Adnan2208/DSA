class Solution {
public:

    int getValue(char s){
        if(s == '(') return 1;
        if(s == '{') return 2;
        if(s == '[') return 3;
        if(s == ')') return -1;
        if(s == '}') return -2;
        if(s == ']') return -3;
        return 0;
    }

    bool isValid(string s) {
        stack<int> stk;

        for(int i = 0; i < s.length(); i++){
            int val = getValue(s[i]);

            if(val > 0){
                stk.push(val);
            } else {
                if(stk.empty()) return false;
                if(-stk.top() != val) return false;
                stk.pop();
            }
        }

        return stk.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna