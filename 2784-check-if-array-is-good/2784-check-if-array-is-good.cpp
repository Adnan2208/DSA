class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int max = nums[nums.size()-1];
        int reqEl = max+1;
        if(reqEl != nums.size()) return false;

        for(int i =0; i<reqEl; i++){
            if(i == max && nums[i] == i) continue;
            else if (nums[i] == i+1) continue;
            else return false; 
        }
        return true;
        
    }
};