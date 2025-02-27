#include <string.h>

int firstUniqChar(char* s) {
    int lenght=strlen(s);

            
    for (int i = 0; i < lenght; i++)
    {
        int X=1;

        for (int j = 0; j < lenght; j++)
        {
            if (i != j && s[i]==s[j])
            {
                X=0;
                break;
            }
            
        }
    }

    if (X==1)
    {
        return i;
    }
    

    return -1;
}