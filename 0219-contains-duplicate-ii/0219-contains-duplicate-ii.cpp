class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> umpp;

        for(int i=0; i<nums.size(); i++){
            if(umpp.find(nums[i]) != umpp.end()){
                int lastSeen = umpp[nums[i]];
                if(abs(lastSeen - i) <= k) return true;
            }
            umpp[nums[i]] = i;
        }

        return false;
    }
};