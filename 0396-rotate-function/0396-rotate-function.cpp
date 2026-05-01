class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        if(nums.size() <= 1) return 0;

        int n = nums.size();
        int f = 0;
        int sum = accumulate(nums.begin(),nums.end(),0);

        for(int i =0; i<n; i++){
            f += nums[i] * i;
        }
        int maxValue = f;

        for(int i =1; i<n; i++){
            int newF = f + sum - (n * nums[n-i]);
            maxValue = max(maxValue,newF);
            f = newF;
        }
        return maxValue;
    }
};