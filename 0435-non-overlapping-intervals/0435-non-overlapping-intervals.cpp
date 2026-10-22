class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& Intervals) {
        sort(Intervals.begin(),Intervals.end(),
        [](vector<int>& a, vector<int>&b){
            return a[1] < b[1];
        });

        int end = Intervals[0][1];
        int ans = 0;
        for(int i =1; i<Intervals.size(); i++){
            if(Intervals[i][0] < end){
                ans++;
            }
            else{
                end = Intervals[i][1];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna