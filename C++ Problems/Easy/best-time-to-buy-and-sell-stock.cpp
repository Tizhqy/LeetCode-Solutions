#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            if (prices.empty()) return 0;

            int min=prices[0];
            int maxProfit=0;

            for (int i = 0; i < prices.size(); i++)
            {
                if (prices[i]<min)
                {
                    min=prices[i];
                }else{
                    maxProfit=max(maxProfit,prices[i]- min);
                }
                
            }
            
            return maxProfit;
        }
    };
