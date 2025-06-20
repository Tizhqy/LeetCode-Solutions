#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> values = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };

        string result;
        for (auto [val, sym] : values) {
            while (num >= val) {
                result += sym;
                num -= val;
            }
        }
        return result;
    }
};

class Solution {
public:
    string intToRoman(int num) {
        string result;

 
        while (num >= 1000) {
            result += 'M';
            num -= 1000;
        }


        if (num >= 900) {
            result += "CM";
            num -= 900;
        } else if (num >= 500) {
            result += "D";
            num -= 500;
        } else if (num >= 400) {
            result += "CD";
            num -= 400;
        }
        while (num >= 100) {
            result += "C";
            num -= 100;
        }


        if (num >= 90) {
            result += "XC";
            num -= 90;
        } else if (num >= 50) {
            result += "L";
            num -= 50;
        } else if (num >= 40) {
            result += "XL";
            num -= 40;
        }
        while (num >= 10) {
            result += "X";
            num -= 10;
        }


        if (num == 9) {
            result += "IX";
            num -= 9;
        } else if (num >= 5) {
            result += "V";
            num -= 5;
        } else if (num == 4) {
            result += "IV";
            num -= 4;
        }
        while (num >= 1) {
            result += "I";
            num -= 1;
        }

        return result;
    }
};
