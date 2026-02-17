class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0 || x == 1) return x;
        long long raiseTo = n;
        if(n < 0){
            x = 1/x;
            raiseTo = raiseTo * -1;
        }

        double ans = 1;

        while(raiseTo > 0){
            if(raiseTo % 2 == 0){
                x = x * x;
                raiseTo = raiseTo/2;
            }
            else{
                ans *= x;
                raiseTo = raiseTo -1;
            }
        }
        return ans;
    }
};