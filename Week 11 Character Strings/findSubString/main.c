/*
(findSubstring) Write a C function that takes two character string arguments, str and substr as input
and returns 1 if substr is a substring of str (i.e. if substr is contained in str) and 0 if not. For
example, the function will return 1 if substr is "123" and str is "abc123xyz", but it will return 0
if otherwise. Note that for this question you are not allowed to use any string functions from the standard
C library.
(1) Test Case 1:
Enter the string:
abcde fgh
Enter the substring:
abc
findSubstring(): Is a substring
(2) Test Case 2:
Enter the string:
abcdefgh
Enter the substring:
bc
findSubstring(): Is a substring
(3) Test Case 3:
Enter the string:
abcde f
Enter the substring:
cdef
findSubstring(): Not a substring
(4) Test Case 4:
Enter the string:
abcdef
Enter the substring:
xy
findSubstring(): Not a substring
*/
#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40], *p;
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr)
{
    int i;

    while(*str!='\0')
    {
        i=0;
        while(substr[i]!='\0')
        {
            if(substr[i]!=str[i])
                break;
            else if(substr[i+1] == '\0')
                return 1;

            ++i;
        }
        ++str;
    }
 return 0;
}

/*int i, j, len, check=0;

    len=strlen(substr);

    for(i=0; str[i]; i++)
    {
        for(j=0; substr[j]; j++)
        {
            if(str[i]==substr[j])
                check++;
        }
    }
    if(len==check)
        return 1;

    return 0;
*/

