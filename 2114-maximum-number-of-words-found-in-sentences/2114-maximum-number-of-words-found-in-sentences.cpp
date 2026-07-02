class Solution {
public:

    int getWords(string s){
        if(s.empty()) return 0;

        int count = 0;
        for(int i =0; i<s.size(); i++){
            if(s[i] == ' ') count++;
        }
        return count+1;
    }

    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i=0; i<sentences.size(); i++){
            ans = max(ans,getWords(sentences[i]));
        }

        return ans;
    }
};