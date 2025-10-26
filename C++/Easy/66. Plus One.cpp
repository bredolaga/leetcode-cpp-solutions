class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
     for (int i = d.size() - 1; i >= 0; i--) {
     d[i]++;
    if (d[i] < 10) return d; 
    d[i] = 0;
}
    d.insert(d.begin(), 1); 
    return d;
    }
};
