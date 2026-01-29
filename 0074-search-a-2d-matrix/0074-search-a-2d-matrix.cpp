class Solution {
public:

    bool bs(vector<int> arr,int num){
        int low = 0;
        int high = arr.size()-1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(arr[mid] == num){
                return true;
            } 
            else if(arr[mid] > num){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[0].size()-1;
        int matrixIndex = -1;

        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][low] > target){
                continue;
            }
            else{
                if(matrix[i][high] < target){
                    continue;
                }
                matrixIndex = i;
                break;
            }
        }

        if(matrixIndex != -1){
            return bs(matrix[matrixIndex],target);
        }
        return false;
    }
};