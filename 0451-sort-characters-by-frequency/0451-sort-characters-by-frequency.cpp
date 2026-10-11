class Solution {
public:
    string frequencySort(string s) {
        map<int,int> mpp;

        for(int i =0; i<s.size(); i++){
            mpp[s[i]]++;
        }

        vector<pair<char,int>> v(mpp.begin(),mpp.end());

        sort(v.begin(),v.end(),[](auto& a, auto& b){
            return a.second > b.second;
        });

        string ans = "";

        for(int i =0; i<v.size(); i++){
            while(v[i].second > 0){
                ans += v[i].first;
                v[i].second--;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna