class Solution {
public:

    string rev(string& s){
        int i =0;
        int j = s.size()-1;
        while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }

    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        string ans = "";
        

        for(int i =0; i<s.size(); i++){
            while(i < s.size() && s[i] == ' ') i++;
            string temp = "";

            while(i < s.size() && s[i] != ' '){
                temp += s[i];
                i++;
            }

            if(temp.empty()) continue;
            if(!ans.empty()) ans += ' ';
            
            ans += rev(temp);
        }
        return ans;
}
};