#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long n = x; 
        bool neg = n < 0;
        if (neg) n = -n; 
        string temp = to_string(n);
        std::reverse(temp.begin(), temp.end());
        long long result = stol(temp);
        if (neg) result = -result;
        if (result > INT32_MAX || result < INT32_MIN) return 0;
        return (int)result;
    }
};
