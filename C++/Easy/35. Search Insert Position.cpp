class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l = 0, r = nums.size() - 1, m;
        
        while (r >= l){
             m = (l + r) / 2;
        if (nums[m] == t) return m;
        else if (t > nums[m]) l = m + 1;
        else r = m - 1;   
        } 
   return l;  
    
    }
};
