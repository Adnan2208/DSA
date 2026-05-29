class Solution {
public:

    int getNumSum(int x){
        if(x <= 9) return x;
        int sum = 0;
        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        vector<int> temp;
        for(int i =0; i<nums.size(); i++){
            temp.push_back(getNumSum(nums[i]));
        }

        int min = INT_MAX;
        for(int i =0; i<temp.size(); i++){
            if(temp[i] < min) min = temp[i];
        }
        return min;
    }
};