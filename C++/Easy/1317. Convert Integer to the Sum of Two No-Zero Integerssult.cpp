class Solution {
public:
vector<int> getNoZeroIntegers(int n){ 
for (int a = 1; a < n; a++) {
  int b = n - a;
  if (noZero(a) && noZero(b)) 
  {return {a, b};
}   
} 
return{};
}
private:
bool noZero(int n) {
while (n > 0) {
    if (n % 10 == 0) return false;
        n /= 10;        
    }
return true;
    }
};
