class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());

        int n = temp.size();

        for(int i =0; i<n; i++){
            if(temp == nums) return true;
            int num = temp[0];
            temp.erase(temp.begin());
            temp.push_back(num);
        }
        return false;
    }
};