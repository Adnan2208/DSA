class Solution {
public:
    int hammingWeight(int n) {
        string bits = "";
        int count = 0;

        while(n > 0){
            bits += (n % 2) + '0';
            n /= 2;
        }

        for(int i =0; i<bits.size(); i++){
            if(bits[i] == '1') count++;
        }
        return count;
        
    }
};