/*
Write a C function that compares the string pointed to by s1 to the string pointed to by s2. If
the string pointed to by s1 is greater than, equal to, or less than the string pointed to by s2,
then it returns 1, 0 or –1 respectively. Write the code for the function without using any of
the standard C string library functions.
*/
#include <stdio.h>
#include <stdlib.h>
int strcmp(char *s1, char *s2);
int main()
{
    char source[80], target[80], *p;
    fgets(source); if (p=strchr(source,'\n')) *p='\0';
    fgets(target); if (p=strchr(target,'\n')) *p='\0';
    printf("strcmp=%d", strcmp(source, target));
    return 0;
}

int strcmp(char *s1, char *s2)
{
    while(1)
    {
        if(*s1 =='\0' && *s2 =='\0')
            return 0;
        else if(*s1 == '\0')
            return -1;
        else if(*s2 == '\0')
            return 1;
        else if (*s1<*s2)
            return -1;
        else if(*s1>*s2)
            return 1;

        s1++;
        s2++;

    }
}
