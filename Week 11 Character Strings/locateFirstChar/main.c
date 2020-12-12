/*
(locateFirstChar) Write a C function that locates the first occurrence of ch in the string str. The
function returns the index, or -1 if ch does not occur in the string.
(1) Test Case 1
Enter a string:
I am a boy
Enter the target character: a
locateFirstChar(): 2
(2) Test Case 2
Enter a string:
I am a boy
Enter the target character: z
locateFirstChar(): -1
*/
#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main()
{
    char str[40], ch, *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}
int locateFirstChar(char *str, char ch)
{
    int i;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ch)
        {
            return i;
        }
    }
    return -1;

}
