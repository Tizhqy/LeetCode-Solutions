#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

    class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
                int closest=nums[0]+nums[1]+nums[2];

                sort(nums.begin(), nums.end());
                for (int i = 0; i < nums.size()-2; i++)
                {
                    int left=i+1;
                    int right=nums.size()-1;

                    while (left < right){
                        int sum=nums[left]+nums[right]+nums[i];
                            if(abs(target - sum) < abs(target - closest)){
                                closest=sum;
                            }
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                }else return target;
                }
            
            }
            return closest; 
        }
    };
