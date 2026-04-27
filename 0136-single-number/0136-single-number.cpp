class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umpp;

        for(int i = 0; i<nums.size(); i++){
            umpp[nums[i]]++;
        }

        for(auto it : umpp){
            int num = it.first;
            int count = it.second;
            if(count == 1) return num;
        }
        return -1;
    }
};