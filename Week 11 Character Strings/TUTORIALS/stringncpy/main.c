/*
Write the function strncpy() that copies not more than n characters (characters that follow a
null character are not copied) from the array pointed to by s2 to the array pointed to by s1.
If the array pointed to by s2 is a string shorter than n characters, null characters are
appended to the copy in the array pointed to by s1, until n characters in all have been
written. The strncpy returns the value of s1.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *stringncpy(char *s1, char *s2, int n);
int main()
{
    char targetStr[40], sourceStr[40], *target, *p;
    int length;

    printf("Enter the string:\n");
    fgets(sourceStr, 40, stdin);
    if (p=strchr(sourceStr, '\n')) *p ='\0';
    printf("Enter the number of characters:\n");
    scanf("%d", &length);
    target = stringncpy(targetStr, sourceStr, length);
    printf("stringncpy(): %s\n", target);
    return 0;
}

char *stringncpy(char *s1, char *s2, int n)
{
    int i,j;

    for(i=0; i<n: i++)
    {
        if (s2[i] != '\0')
            s1[i]=s2[i];
        else
            break;
    }
    s1[i]='\0';

    //to append null character after copying if s2 length is shorter than n
    for(j=i; j<n; j++)
    {
        s1[j]='\0';
    }

    return s1;
}
