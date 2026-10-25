class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        for(int i=0; i<words.size(); i++){
            for(int j =0; j<words.size(); j++){
                if(words[i] == words[j]) continue;
                if(words[j].find(words[i]) != string::npos){
                    if(find(ans.begin(),ans.end(),words[i]) == ans.end()){
                        ans.push_back(words[i]);
                    }
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna