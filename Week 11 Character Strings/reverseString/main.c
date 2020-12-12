#include <stdio.h>
#include<string.h>
void reverse(char *);
int main()
{
    char line[132], *p;

    fgets(line, 132, stdin);
    if ( p=strchr(line,'\n') ) *p = '\0';
    while (strcmp(line, "END") !=0)
    {
        reverse(line);
        printf("%s\n", line);
        fgets(line, 132, stdin);
        if ( p=strchr(line,'\n') ) *p = '\0';

    }
}
void reverse(char *s)
{
    char c, *end;
    end = s + strlen(s) - 1;
    while (s < end)
    {
        /* 2 ends approaching centre */
        /* swapping operation */
        c = *s;
        *s++ = *end;
        //*s = *end; s++;

        *end-- = c;
        //*end = c; end--;
    }
}
