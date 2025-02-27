#include<string.h>
bool isSubsequence(char* s, char* t) {
    int lenght1=strlen(s);
    int lenght2=strlen(t); 
    int i=0, j=0;
    while (i<lenght2 && j<lenght1)
    {
        if (s[j]==t[i])
        {
            j++;
        }
        i++;
    }

    return lenght1==j;
}