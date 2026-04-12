class Solution {
public:
    int minTimeToType(string word) {
        int total = 0;
        char current = 'a';
        for (auto ch : word) {
            int diff = abs(ch - current);
            total += min(diff, 26 - diff);
            total += 1;
            current = ch;
        }
        return total;
    }
};