class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> umpp;
        vector<int> index;
        
        for(int i=0; i<nums.size(); i++){
            umpp[nums[i]] = i;
        }

        for(int i=0; i<nums.size(); i++){
            int nt = target - nums[i];
            if(umpp.find(nt) != umpp.end() && umpp[nt] != i){
                index.push_back(i);
                index.push_back(umpp[nt]);
                return index;
            }
        }
        return index;
    }
};