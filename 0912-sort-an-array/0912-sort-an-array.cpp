class Solution {
public:
    void qs(vector<int>& nums,int low, int high){
        if(low >= high){
            return;
        }

        int l = low;
        int r = high;
        int pivot = nums[low];

        while(l<=r){
            while(l<= r && nums[l] < pivot){
                l++;
            }
            while(l<= r && nums[r] > pivot){
                r--;
            }

            if(l <= r){
            swap(nums[l],nums[r]);
            l++;
            r--;
            }
        }
        
        qs(nums,low,r);
        qs(nums,l,high);

    }

    vector<int> sortArray(vector<int>& nums) {
        int l = 0;
        int r = nums.size() -1;

        qs(nums,l,r);
        return nums;

    }
};