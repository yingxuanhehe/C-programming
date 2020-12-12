/*
(countSubstring) Write a C function that takes in two parameters str and substr, and counts the
number of substring substr occurred in the character string str. If the substr is not contained in
str, then it will return 0. Please note that you do not need to consider test cases such as str =
"aooob" and substr = "oo".
(1) Test Case 1:
Enter the string:
abcdef
Enter the substring:
dd
countSubstring(): 0
(2) Test Case 2:
Enter the string:
abcabcabc cbaf
Enter the substring:
abc
countSubstring(): 3
(3) Test Case 3:
Enter the string:
babababaabf
Enter the substring:
ab
countSubstring(): 4
*/
#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80], substr[80], *p;
    int result=INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}
int countSubstring(char str[], char substr[])
{
    int i, count=0;

    while(*str!='\0')
    {
        i=0;
        while(substr[i]!='\0')
        {
            if(substr[i]!=str[i])
                break;
            else if(substr[i+1] == '\0')
            ++count;

            ++i;
        }
        ++str;
    }
 return count;
}
