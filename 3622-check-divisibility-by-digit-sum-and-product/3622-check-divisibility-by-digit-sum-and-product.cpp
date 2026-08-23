class Solution {
public:
    bool checkDivisibility(int n) {
        int copy = n;
        long long prod = 1;
        int sum = 0;

        while(n > 0){
            prod *= n % 10;
            sum += n % 10;
            n /= 10;
        }

        if(copy % (sum + prod) == 0) return true;
        return false;
    }
};