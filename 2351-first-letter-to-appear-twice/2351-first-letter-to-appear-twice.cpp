class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int> uset;
        for(int i=0; i<s.size(); i++){
            if(uset.find(s[i]) != uset.end()){
                return s[i];
            }
            uset.insert(s[i]);
        }
        return s[0];
    }
};