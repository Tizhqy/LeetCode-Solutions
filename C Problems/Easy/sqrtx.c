#include <stdio.h>

int mySqrt(int x) {
    int y;
    
    int* result=(int*)malloc(2 * sizeof(int));
    
    if (x==0 || x==1){
        return x;
    }
    for (int i = 1; i <= x/2; i++){
        if (i*i <=x && (i+1)*(i+1)>x){
            y=i;
            break;;
        }   
    }
    return y;
}