class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        vector<int> t(n);
        for (int i = 0; i < n; i++) {
            t[i] = s[i];
        }

        while (n > 2) {
        for (int i = 0; i < n - 1; i++) {
            t[i] = (t[i] + t[i+1]) % 10;
     }
        n--; 
    }
    return t[0] == t[1];
}
};
