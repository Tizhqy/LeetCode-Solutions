#include<string.h>

char findTheDifference(char* s, char* t) {
    int lenght1=strlen(s);
    int lenght2=strlen(t);
    int toplam1=0;
    int toplam2=0;
    
    if (lenght2 !=lenght1+1) {
        return '\0';
    }

    for (int i = 0; i < lenght1; i++)
    {
        toplam1+=s[i];
    }

    for (int i = 0; i < lenght2; i++)
    {
        toplam2+=t[i];
    }
    
    return (char)(toplam2-toplam1);
}//ben bunu nasil dusundum aq
