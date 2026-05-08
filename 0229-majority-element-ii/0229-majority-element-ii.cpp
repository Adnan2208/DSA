class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> appearance;
        if(nums.size() <= 1) return nums;
        
        int n = nums.size();
        
        for(int i =0; i<n; i++){
            appearance[nums[i]]++;
        }

        for(auto it : appearance){
            if(it.second > n/3) ans.push_back(it.first);
        }

        return ans;
    }
};