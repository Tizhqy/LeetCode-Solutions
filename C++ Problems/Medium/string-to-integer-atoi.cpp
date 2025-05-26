#include<iostream>
#include<string>
#include<cctype>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size(), sign = 1;
        long result = 0;

        while (i<n && s[i]==' ')i++;

        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        while(i<n && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');
            if (sign * result <= INT32_MIN) return INT32_MIN;
            if (sign * result >= INT32_MAX) return INT32_MAX;
            i++;
        }
        return sign * result;
    }
};
