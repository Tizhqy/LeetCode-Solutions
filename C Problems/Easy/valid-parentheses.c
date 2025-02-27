#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isValid(char* s) {
    int top= -1;
    int lenght=strlen(s);
    char stack[lenght];
    
    for (int i = 0; i < lenght; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top]=s[i];
        }else{
            if (top==-1 ||
            (s[i]==')' && stack[top] != '(') ||
            (s[i]==']' && stack[top] != '[') ||
            (s[i]=='}' && stack[top] != '{')){   
            return false;
            }
        top--;    
        }

    }
    return top== -1;
}