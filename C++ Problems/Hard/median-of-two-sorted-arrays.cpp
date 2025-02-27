#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int>nums;

            for (int i = 0; i < nums1.size(); i++)
                nums.push_back(nums1[i]);
            for (int i = 0; i < nums2.size(); i++)
                nums.push_back(nums2[i]);

            sort(nums.begin(), nums.end());
            int m=nums.size()/2;
            if (nums.size()%2==0)   return (nums[m]+nums[m-1])/2.0;
            else return nums[m];

        }
    };
