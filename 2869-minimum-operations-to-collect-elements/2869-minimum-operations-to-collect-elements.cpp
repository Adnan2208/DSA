class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> uset;

        for(int i =1; i<=k; i++){
            uset.insert(i);
        }
        
        int count = 0;
        for(int i = nums.size()-1; i>=0; i--){
            if(uset.empty()) return count;
            if(uset.find(nums[i]) != uset.end()) uset.erase(nums[i]);
            count++;
        }
        return count;

    }
};