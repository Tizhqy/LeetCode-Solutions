#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_set<char>window; 
            int result=0,left=0,right=0;
            while (right < s.size()) {
        if (window.find(s[right]) == window.end()) {
            window.insert(s[right]);
            result = max(result, right - left + 1);
            right++;
        } else {
            window.erase(s[left]);
            left++;
        }
    }
    return result;
    }
    };
