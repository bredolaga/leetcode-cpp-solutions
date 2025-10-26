class Solution {
public:
    int findMin(vector<int>& n) {
    int l = 0, r = n.size() - 1;
    
    while (l < r){
    int m = (l + r) / 2;
    if (n[m] > n[r])l = m + 1;
    else  r = m;
    }
    return n[l];
  }
};
