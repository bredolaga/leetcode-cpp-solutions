// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 0, r = n;
        while (r > l){
        long long m = (l + r) / 2;
        if (isBadVersion(m))
        r = m;
        else l = m + 1;
        }
        return l;
    }
};
