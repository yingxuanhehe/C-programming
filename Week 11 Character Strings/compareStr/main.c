#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
    char a[80],b[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    printf("compareStr(): %d\n", compareStr(a,b));
    return 0;
}
int compareStr(char *s, char *t)
{
    while(*s != '\0')
    {
        if(*s != *t)
            return *s - *t;

        ++s;
        ++t;
    }

    if(*s != *t)
        return *s - *t;

    return 0;
}
