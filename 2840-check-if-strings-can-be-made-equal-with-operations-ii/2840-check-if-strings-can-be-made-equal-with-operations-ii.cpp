class Solution {
public:
    bool checkStrings(string s1, string s2) {
    unordered_map<char,int> s1Even, s1Odd, s2Even, s2Odd;

    for(int i = 0; i < s1.size(); i++){
        if(i % 2 == 0) s1Even[s1[i]]++;
        else            s1Odd[s1[i]]++;
    }

    for(int j = 0; j < s2.size(); j++){
        if(j % 2 == 0) s2Even[s2[j]]++;
        else            s2Odd[s2[j]]++;
    }

    return s1Even == s2Even && s1Odd == s2Odd;
}
};