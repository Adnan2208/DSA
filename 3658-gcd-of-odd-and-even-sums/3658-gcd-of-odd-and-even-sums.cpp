class Solution {
public:

    int gcd(int n1,int n2){
        while(n1>0 && n2>0){
            if(n1 > n2) n1 -= n2;
            else if(n1 < n2) n2 -= n1;
            else return n1;
        }

        if(n1 > 0) return n1;
        else return n2;
    }

    int gcdOfOddEvenSums(int n) {
        int oddSum = 0;
        int evenSum = 0;

        for(int i =1; i<(n*2); i++){
            if(i % 2 == 0) evenSum += i;
            else oddSum += i;
        }
        return gcd(oddSum,evenSum);
    }
};