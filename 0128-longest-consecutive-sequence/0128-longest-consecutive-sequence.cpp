class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        int ans = 0;

        for(int i =0; i<nums.size(); i++){
            uset.insert(nums[i]);
        }

        for(auto it: uset){
            if(uset.find(it-1) != uset.end()) continue;
            else{
                auto curr = it;
                int len = 1;
                while(uset.find(curr+1) != uset.end()){
                    len++;
                    curr++;
                }
                ans = max(ans,len);
            }
        }
        return ans;
    }
};