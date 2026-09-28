class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int max =0;
        for(int i =0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
                if(count > max) max = count;
            }
            else if(s[i] == ')'){
                count--;
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna