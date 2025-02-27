int mySqrt(int x) {
    long long y;
    long long i;
    if (x==0 || x==1){
        return x;
    }
    for (i = 1; i <= x/2; i++){
        if (i*i <=x && (i+1)*(i+1)>x){
            y=i;
            break;;
        }   
    }
    return y;
}
