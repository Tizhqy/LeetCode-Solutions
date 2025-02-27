//Explanation: 121 reads as 121 from left to right and from right to left.

#include <limits.h>
bool isPalindrome(int x) {
    if(x<0){
        return false;
    } 
    int reminder,y;
    long long result=0;
    y=x;

    while(x!=0){
        reminder=x%10;
        result=result*10+reminder;
        if (result> INT_MAX)
        {
            return false;
        }
        
        x/=10;
    }

    return result==y;
}