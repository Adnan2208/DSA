class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> result(2, -1);

        while (i <= j) {
            if (nums[i] < target) {
                i++;
            } else if (nums[j] > target) {
                j--;
            } else if (nums[i] == target && nums[j] == target) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
        return result;
    }
};