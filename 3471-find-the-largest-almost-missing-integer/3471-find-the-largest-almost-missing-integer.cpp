class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> umpp;
        int start = 0;
        int end = k;

        while(end <= nums.size()){
            unordered_map<int,int> seen;
            for(int i = start; i < end;i++){
                if(seen.find(nums[i]) == seen.end()){
                    umpp[nums[i]]++;
                    seen[nums[i]]++;
                }
            }
            start++;
            end++;
        }

        int ans = -1;
        for(auto it : umpp){
            if(it.second == 1){
                ans = max(ans,it.first);
            }
        }

        return ans;
    }
};