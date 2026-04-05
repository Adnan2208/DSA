class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> umpp;
        
        for(int i =0; i<moves.size(); i++){
            umpp[moves[i]]++;
        }

        if(umpp['U'] == umpp['D'] && umpp['L'] == umpp['R']){
            return true;
        }

        return false;
    }
};