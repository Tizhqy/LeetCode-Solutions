#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0,left=0,right=height.size()-1;
        while(left<right){
            int area = min(height[left], height[right]) * (right - left);
            result = max(result, area);
            if(height[left]<height[right])left++;
            else right--;
        }
        return result;
    }
};
