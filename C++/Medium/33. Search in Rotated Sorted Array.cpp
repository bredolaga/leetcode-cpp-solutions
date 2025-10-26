class Solution {
public:
    int search(vector<int>& n, int t) {
    int l = 0, r = n.size() - 1, m = 0;
    
    while (r >= l) {
        m = (l + r) / 2;
        if (n[m] == t) return m;
        if (n[l] <= n[m]) {
            if (t >= n[l] && t < n[m])
            r = m - 1;
            else
            l = m + 1;
            } 
            else {
            if (t > n[m] && t <= n[r])
            l = m + 1;
            else
            r = m - 1;
            }
    }
     return -1;
    }
};
