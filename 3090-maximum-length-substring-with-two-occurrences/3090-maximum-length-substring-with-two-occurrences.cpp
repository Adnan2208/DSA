class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> umpp;
        int l = 0;
        int r =0;
        int ans= 0;

        while(r < s.size()){
            umpp[s[r]]++;
            while(umpp[s[r]] > 2){
                umpp[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};