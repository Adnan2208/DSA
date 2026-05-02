class Solution {
public:

    int rotate(int n){
        if(n == 0 || n == 1 || n == 8) return n;
        else if(n == 2) return 5;
        else if(n==5) return 2;
        else if(n == 6) return 9;
        else if(n == 9) return 6;
        else return -1;
    }

    bool isValid(int n){
        bool isChanged = false;

        while(n > 0){
            int lastDigit = n %10;
            int r = rotate(lastDigit);

            if(r == -1) return false;
            if(r != lastDigit) isChanged = true;
            n = n/10;
        }
        return isChanged;
    }

    int rotatedDigits(int n) {
        int count = 0;
        for(int i =1; i<=n; i++){
            if(isValid(i)) count++;
        }
        return count;
    }
};