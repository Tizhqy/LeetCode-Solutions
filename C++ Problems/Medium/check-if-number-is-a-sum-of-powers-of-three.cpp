class Solution {
    public:
        bool checkPowersOfThree(int n) {
            for (int i = 16; i >= 0; i--)
            {
                int j=pow(3,i);
                if (n>=j)
                {
                    n-=j;
                }

            }
            return n ==0;
            
        }
    };
