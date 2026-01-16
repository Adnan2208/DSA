class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> umpp;
        for(int i=0; i<nums.size(); i++){
            umpp[nums[i]]++;
        }

        for(int i=0; i<=nums.size(); i++){
            if(umpp.find(i) == umpp.end()){
                return i;
            }
        }
        return -1;
    }
};