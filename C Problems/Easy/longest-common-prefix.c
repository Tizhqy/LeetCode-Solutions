#include<stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* rem=strs[0];
    if(strsSize == 0){
        return "";
    }
    
    for (int i = 0; i < strsSize; i++){
        int j=0;
        while (rem[j] && strs[i][j] && rem[j]== strs[i][j] ){
            j++;
        }
        rem[j]='\0';
        if (rem[0]=='\0'){
            return "";
        }
        
    }   
    return rem;
}