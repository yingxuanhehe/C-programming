/*
(countWords) Write a function that accepts a string s as its parameter. The string contains a sequence of
words separated by spaces. The function then displays the number of words in the string.
(1) Test Case 1:
Enter the string:
How are you?
countWords(): 3
(2) Test Case 2:
Enter the string:
There are 12 dollars.
countWords(): 4
(3) Test Case 3:
Enter the string:
Oneword
countWords(): 1
*/
#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
    char str[50], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int i, count=0;

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] == ' ' && s[i-1] >='!')
            count++;
        else if(s[i]>='!' && s[i+1]=='\0')
            count++;
    }
    return count;
}
