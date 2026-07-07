class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans1 = 1;
        int ans2 = 1;
        
        for(int i = n-1; i> n-4; i--){
            ans1 *= nums[i];
        }

        for(int i =0; i<2; i++){
            ans2 *= nums[i];
        }
        ans2 *= nums[n-1];

        return max(ans1,ans2);
    }
};