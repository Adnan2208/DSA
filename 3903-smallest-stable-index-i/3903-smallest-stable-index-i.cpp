class Solution {
public:

    int getLargest(int start,int end,vector<int>& nums){
        int ans = INT_MIN;
        for(int i = start; i<= end; i++){
            ans = max(ans,nums[i]);
        }
        return ans;
    }

    int getSmallest(int start,int end,vector<int>& nums){
        int ans = INT_MAX;
        for(int i = start; i<= end; i++){
            ans = min(ans,nums[i]);
        }
        return ans;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        for(int i = 0; i<nums.size(); i++){
            int ins = (getLargest(0,i,nums) - getSmallest(i,nums.size()-1,nums));
            if(ins <= k){
                return i;
            }
        }
        return -1;
    }
};