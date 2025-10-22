class Solution {
public:
    bool isPerfectSquare(int n) {
    int l = 0, r = n / 2;
    if (n == 1) return true;
    while (r >= l){
    long long m = (l + r) / 2;
    if (m * m == n) return true;
    else if (m * m > n) r = m - 1;
    else l = m + 1;
    }
    return false;
    }
};
