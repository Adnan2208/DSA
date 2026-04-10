class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> umpp;
        int result = -1;
        for(int i = 0; i<nums.size(); i++){
            umpp[nums[i]].push_back(i);
            if(umpp[nums[i]].size() >= 3){
                int temp = 2 * (i - umpp[nums[i]][umpp[nums[i]].size()-3]); 
                if(temp < result || result == -1){
                    result = temp;
                }
            }
        }
        return result;
    }
};