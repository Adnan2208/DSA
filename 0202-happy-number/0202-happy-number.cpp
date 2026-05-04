class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> uset;
        int ans = 0;


        while(ans != 1){
            if(uset.find(n) != uset.end()) return false;
            uset.insert(n);
            
            while(n > 0){
            int lastDigit = n % 10;
            ans += (lastDigit * lastDigit);
            n /= 10;
            }

            if(ans == 1) return true;
            n = ans;
            ans = 0;
        }
        return true;
    }
};