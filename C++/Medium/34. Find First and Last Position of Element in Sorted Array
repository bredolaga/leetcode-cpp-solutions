class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
    int l1 = 0,r1 = n.size() - 1,p1 = -1,p2 = -1;
    if (n.size() == 0) return {-1, -1};
    while (r1 >= l1){
    int m = (l1 + r1) / 2;
    if (n[m] == t){
    p1 = m; 
    p2 = m;
    break;
    }
    else if (n[m] > t) r1 = m - 1;
    else l1 = m + 1;
    }
    if (p1 == -1)  return {-1, -1};
    while (p1 - 1 >= 0 && n[p1 - 1] == t) p1--;
    while (p2 + 1 < n.size() && n[p2 + 1] == t ) p2++;
    return {p1, p2}; 
    }
};
