class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lCount = 0;
        int rCount = 0;
        int undCount = 0;
        for(int i =0; i<moves.size(); i++){
            if(moves[i] == 'L'){
                lCount++;
            }
            else if(moves[i] == 'R'){
                rCount++;
            }
            else{
                undCount++;
            }
        }

        if(lCount >= rCount) return (lCount+undCount-rCount);
        else return (rCount+undCount-lCount);
    }
};