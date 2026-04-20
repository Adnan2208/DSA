class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int end = colors.size()-1;
        int ans = 0;

        // Max dist from left;
        for(int i =0; i<colors.size();i++){
            if(colors[i] != colors[end]) ans = max(ans,abs(i-end));
        }

        // Max dist from right;
        for(int i = end; i >= 0; i--){
            if(colors[i] != colors[0]) ans = max(ans,abs(i-0));
        }

        return ans;
    }
};