/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);

int guessNumber(int n){
	int min=1;
    int max=n;
    
    while(min<=max){
        int m=min+(max-min)/2;
        int result= guess(m);
        if (result == 0)
        {
            return m;
        }else if(result == -1){
            max=m-1;
        }else{
            min=m+1;
        }
        
    }
    return -1;
}