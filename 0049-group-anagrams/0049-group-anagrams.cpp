class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> umpp;

        if(strs.size() <= 1){
            ans.push_back(strs);
            return ans;
        }

        for(int i =0; i<strs.size(); i++){
            string el = strs[i];
            sort(el.begin(),el.end());


            if(umpp.find(el) != umpp.end()){
                umpp[el].push_back(strs[i]);
            }
            else{
                vector<string> temp;
                temp.push_back(strs[i]);

                umpp[el] = temp;
            }
        }

        for(auto it : umpp){
            ans.push_back(it.second);
        }

        return ans;
    }
};