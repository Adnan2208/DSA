class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> lower;
        unordered_set<char> upper;

        for(char ch : word){
            if(islower(ch)) lower.insert(ch);
            else upper.insert(ch);
        }

        int count = 0;
        for(char i = 'a'; i<= 'z'; i++){
            if((lower.count(i) && upper.count(toupper(i))) > 0){
                count++;
            }
        }
        return count;
    }
};