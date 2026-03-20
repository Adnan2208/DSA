class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return 1;
        int lastSmallest = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[lastSmallest]){
                lastSmallest++;
                nums[lastSmallest] = nums[i];
            }
        }

        return lastSmallest+1;
    }
};