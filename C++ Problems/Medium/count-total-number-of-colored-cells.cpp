class Solution {
    public:
        long long coloredCells(int n) {
            long long counter=1;

            long long sum=1;

            long long a=4;
            while (counter!=n)
            {
                sum+=a;
                a+=4;
                counter++;
            }

            return sum;
        }
    };
