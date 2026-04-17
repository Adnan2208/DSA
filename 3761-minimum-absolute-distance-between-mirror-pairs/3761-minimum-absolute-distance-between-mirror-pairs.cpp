class Solution {
public:

    int reverseNum(int x) {
        int rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> prev;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            
            if (prev.count(num)) {
                ans = min(ans, i - prev[num]);
            }
            int reversed = reverseNum(num);
            prev[reversed] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};