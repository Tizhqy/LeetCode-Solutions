class Solution {
    public:
        int fib(int n) {
            int a=1;
            int b=0;
            if(n==0)return 0;
            for (int i = 1; i < n; i++)
            {
                int rem=a;
                a+=b;
                b=rem;
            }
            return a;
        }
    };
