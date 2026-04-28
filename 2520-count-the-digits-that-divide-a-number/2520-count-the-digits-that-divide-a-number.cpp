class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int actualNum = num;
        
        while(num > 0){
            int lastDigit = num % 10;

            if((actualNum % lastDigit) == 0) count++;
            num /= 10;
        }
        return count;
    }
};