class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastSmallest = 0;
        int dupCount = 0;
        for(int i =1; i<nums.size(); i++){
            if(nums[i] == nums[lastSmallest] && dupCount < 1){
                dupCount++;
                lastSmallest++;
                nums[lastSmallest] = nums[i];
            }
            else if(nums[i] > nums[lastSmallest]){
                lastSmallest++;
                nums[lastSmallest] = nums[i];
                dupCount = 0;
            }
        }
        return lastSmallest+1;
    }
};