#include<ctype.h>
#include<math.h>

bool isPerfectSquare(int num) {
    int dig=sqrt(num);

    if (dig*dig==num)
    {
        return true;
    }
    return false;
}