class Solution {
public:

    vector<int> getNums(int n){
        vector<int> temp;
        while(n > 0){
            temp.push_back(n % 10);
            n /= 10;
        }
        return temp;
    }

    vector<int> separateDigits(vector<int>& nums) {
        vector<int> numbers;
        
        for(int i =0; i<nums.size(); i++){
            if(nums[i] > 9){
                vector<int> temp = getNums(nums[i]);
                for(int i = temp.size()-1; i>=0; i--){
                    numbers.push_back(temp[i]);
                }
            }
            else{
                numbers.push_back(nums[i]);
            }
        }
        return numbers;
    }
};