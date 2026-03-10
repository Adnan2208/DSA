class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> umpp;
        
        for(int i=0; i<nums.size(); i++){
            if(umpp.find(nums[i]) != umpp.end()){
                res.push_back(nums[i]);
            }
            umpp[nums[i]]++;
        }

        for(int i = 1; i <= nums.size(); i++){
            if(umpp.find(i) == umpp.end()){
                res.push_back(i);
                break;
            }
        }

        return res;

    }
};