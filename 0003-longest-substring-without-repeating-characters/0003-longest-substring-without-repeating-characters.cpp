class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount = 0;
        int left = 0;
        unordered_map<char, int> umpp;

        for (int i = 0; i < s.size(); i++) {
            if (umpp.find(s[i]) != umpp.end()) {
                while (left <= umpp[s[i]]) {
                    umpp.erase(s[left]);
                    left++;
                }
            }
            umpp[s[i]] = i;
            maxCount = max(i - left + 1, maxCount);
        }

        return maxCount;
    }
};