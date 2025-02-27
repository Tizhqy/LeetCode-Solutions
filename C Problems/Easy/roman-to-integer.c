#include<stdio.h>
#include<string.h>

int romanToInt(char* s) {
    int i,result=0;
    for (i = 0; i < strlen(s); i++){

        if (s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
            result-=1;
        }else if (s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
            result-=10;
        }else if (s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
            result-=100;
        }else{
            switch (s[i]){
            case 'I':
                result+=1;
                break;
            case 'V':
                result+=5;
                break;
            case 'X':
                result+=10;
                break;
            case 'L':
                result+=50;
                break;
            case 'C':
                result+=100;
                break;
            case 'D':
                result+=500;
                break;
            case 'M':
                result+=1000;
                break;
            }
        } 
    }
    return result;
}