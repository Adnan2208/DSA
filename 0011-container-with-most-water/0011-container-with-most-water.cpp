class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxSize = INT_MIN;

        while(i < j){
            int hleft = height[i];
            int hright = height[j];
            int size = min(hleft, hright) * (j - i);

            maxSize = max(maxSize,size);
            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxSize;
    }
};