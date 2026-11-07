class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> ans;
        bool current = false;

        int odd = 0;
        int even = 0;

        while(n > 0){
            if(current == false && ((n & 1) == 1)){
                even++;
            }
            else if(current == true && ((n & 1) == 1)){
                odd++;
            }
            current = !current;
            n = n >> 1;
        }
        
        ans.push_back(even);
        ans.push_back(odd);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna