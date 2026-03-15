class Fancy {
public:
    vector<long long> s;
    const long long MOD = 1e9 + 7;
    long long totalAdd = 0;
    long long totalMulti = 1;

    long long modPow(long long base, long long exp) {
        long long result = 1;
        base %= MOD;

        while (exp > 0) {
            if (exp & 1)
                result = (result * base) % MOD;

            base = (base * base) % MOD;
            exp >>= 1;
        }

        return result;
    }

    Fancy() { s = {}; }

    void append(int val) {
        long long add = ((long long)val - totalAdd + MOD) % MOD;
        long long inv = modPow(totalMulti, MOD - 2);
        long long stored = (add * inv) % MOD;
        s.push_back(stored);
    }

    void addAll(int inc) { totalAdd = (totalAdd + inc) % MOD; }

    void multAll(int m) {
        totalMulti = (totalMulti * m) % MOD;
        totalAdd = (totalAdd * m) % MOD;
    }

    int getIndex(int idx) {
        if (idx >= s.size())
            return -1;
        long long value = s[idx];
        return ((value * totalMulti) + totalAdd) % MOD;
    }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */