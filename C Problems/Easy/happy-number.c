#include <math.h>

bool isHappy(int n) {
    int sum = 0;
    while (n>0)
    {
        int temp=n%10;
        n/=10;
        sum=pow(temp,2)+pow(n,2);
    }
    if (sum==1)
    {
        return true;
    }else if(sum>1&&sum<=4){
        return false;
    }
    return isHappy(n);
}// olmadi :(