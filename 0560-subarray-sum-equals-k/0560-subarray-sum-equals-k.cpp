class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umpp;

        int sum = 0;
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            sum += nums[i];

            if(sum == k) count++;
            int rem = sum - k;
            if(umpp.find(rem) != umpp.end()) count += umpp[rem];

            umpp[sum]++;
        }
        return count;
    }
};