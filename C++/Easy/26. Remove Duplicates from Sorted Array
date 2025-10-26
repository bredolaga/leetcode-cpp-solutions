class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int q = 0;
    for (int i = 1;i < nums.size();i++){
    if (nums[i] != nums[q]){
    q++;    
    nums[q] = nums[i];
         }
        }
    return q + 1;
    }
};
