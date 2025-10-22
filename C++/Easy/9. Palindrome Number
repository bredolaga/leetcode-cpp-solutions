class Solution {
public:
    bool isPalindrome(int x) {
        long long a = 0;
        int b = x, c = x, e = 0;
        if (x < 0) return false;
        
      while (c > 0){
        e++;
        c /= 10;
      }

      for (int i = 0;i < e;i++){
      a = a * 10 + (b % 10);
      b /= 10;
      }  
    
      if (x == a) return true;
      else  return false;
    }
};
