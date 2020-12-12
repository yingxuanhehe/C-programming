/*
(maxCharToFront) Write a C function that accepts a character string str as parameter, finds the largest
character from the string (based on ASCII value), and moves it to the beginning of the string. E.g., if the
string is "adecb", then the string will be "eadcb" after executing the function. The string will be
passed to the caller via call by reference. If more than one largest character is in the string, then the first
appearance of the largest character will be moved to the beginning of the string. For example, if the
string is "adecbe", then the resultant string will be "eadcbe".
(1) Test Case 1:
Enter a string:
adebc
maxCharToFront(): eadbc
(2) Test Case 2:
Enter a string:
agfcdeg
maxCharToFront(): gafcdeg
(3) Test Case 3:
Enter a string:
cba
maxCharToFront(): cba
(4) Test Case 4:
Enter a string:
ab
maxCharToFront(): ba
*/
#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    int i, pos=0, temp;

    str[pos]=str[0];

    for(i=0; i<strlen(str);i++)
    {
        if(str[i]>str[pos])
            pos=i;
    }

     for(i=pos; i>0; i--)
     {
         temp = str[i];
         str[i] = str[i-1];
         str[i-1] = temp;
     }
}

/*int i=1, pos=0, temp;

    while(*(str+i)!=0)
    {
        if(str[i]>str[pos])
            pos=i;
        i++;
    }

     for(i=pos; i>0; i--)
     {
         temp = *(str+i);
       *(str+i) = *(str+i-1);
       *(str+i-1) = temp;
     }
*/
