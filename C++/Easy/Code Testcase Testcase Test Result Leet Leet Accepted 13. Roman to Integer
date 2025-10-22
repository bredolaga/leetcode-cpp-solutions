class Solution {
public:
    int romanToInt(string s) {
        map <char, int> a = {{'I', 1},
        {'V', 5}, {'X', 10},{'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int sum = 0;
    for (int i = 0;i < s.size();i++){
        if (i + 1 < s.size() && a[s[i]] < a[s[i + 1]])
        sum -= a[s[i]];
        else sum += a[s[i]];
    }
    return sum;
    }
};
