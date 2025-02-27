#include <stdio.h>
#include <string.h>
#include <ctype.h>
int lengthOfLastWord(char* s) {

    int l=strlen(s);
    int y=0;

    int i=l-1;
    while (i>=0 && isspace(s[i]))
    {
        i--;
    }
    while (i>=0 && isalpha(s[i]))
    {
        y++;
        i--;
    } 

    return y;
}