class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lastIndex = digits.size()-1;

        if(digits[lastIndex] != 9){
            digits[lastIndex]++;
            return digits;
        }
        else{
            while(digits[lastIndex] == 9 && lastIndex > 0){
                digits[lastIndex] = 0;
                lastIndex--;
            }
            if(digits[lastIndex] == 9){
                digits[lastIndex] = 1;
                digits.push_back(0);
                return digits;
            }
            else{
            digits[lastIndex]++;
                return digits;
            }
        }
        return digits;
    }
};