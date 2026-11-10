class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        if((num - 3) % 3 != 0) return ans;

        long long x = (num - 3) / 3;
        ans.push_back(x);
        ans.push_back(x+1);
        ans.push_back(x+2);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna