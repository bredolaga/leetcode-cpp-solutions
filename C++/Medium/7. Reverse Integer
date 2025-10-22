class Solution {
public:
    int reverse(long long x) {
        int y = abs(x),e = 0;
        long long a = 0;

    while (y > 0){
        e++;
        y /= 10;
      }
      if (x < -2147483648 || x > 2147483648)  return 0;
     
    y = abs(x); 

      for (int i = 0;i < e;i++){
      a = a * 10 + (y % 10);
    if (a < -2147483648 || a > 2147483648) return 0;
      y /= 10;
      }  
    
    if (x < 0) return -a;
    else return a;
    }
};
