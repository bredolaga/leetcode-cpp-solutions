class Solution {
public:
    int mySqrt(int x) {
    int l = 0, r = x / 2;
    if (x == 1) return 1;
    while (r >= l){
    long long m = (l + r) / 2;    
    if (m * m == x) return m;
    else if (m * m < x) l = m + 1;
    else r = m - 1;
    }
    return r;
    }
};
