class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> umpp;
        int multiple = k;
        for(int num : nums){
            umpp[num]++;
        }

        while(true){
            if(umpp.find(k) == umpp.end()){
                return k;
            }
            k += multiple;
        }
        return -1;
    }
};