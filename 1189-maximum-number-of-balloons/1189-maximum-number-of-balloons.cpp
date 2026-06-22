class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> umpp;

        for(int i =0; i<text.size(); i++){
            umpp[text[i]]++;
        }

        return min({umpp['b'],umpp['a'],umpp['l']/2,umpp['o']/2,umpp['n']});
        
    }
};