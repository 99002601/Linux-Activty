#include "mystring.h"
int mystrlen(char* s)
{
	int i;
	for (i = 0; s[i] != '\0'; ++i);
	return i;
}

void  mystrcpy(char* s1,char* s2)
{
	int i;
	for (i = 0; s1[i] != '\0'; ++i) 
	{
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
}

int mystrcmp(char* str1,char* str2)
{
	int i = 0;
    int diff = 0;
    while(str1[i])
    {
        if(str1[i]!=str2[i])
        {
            diff = str1[i] - str2[i];
            break;
        }
        else
        {
            i++;
        }
        return diff;

    }
}

