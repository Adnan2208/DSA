class Solution {
public:

    int gcd(int a,int b){
        while(a>0 && b > 0){
            if(a > b) a -= b;
            else if (b > a) b -= a;
            else return a;
        }

        if(a > b) return a;
        else return b;
    }

    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};