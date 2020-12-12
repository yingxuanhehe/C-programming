/*
(processString) Write a C function that accepts a string str and returns the total number of vowels
totVowels and digits totDigits in that string to the caller via call by reference.
(1) Test Case 1:
Enter the string:
I am one of the 400 students in this class.
Total vowels = 11
Total digits = 3
(2) Test Case 2:
Enter the string:
I am a boy.
Total vowels = 4
Total digits = 0
(3) Test Case 3:
Enter the string:
1 2 3 4 5 6 7 8 9
Total vowels = 0
Total digits = 9
(4) Test Case 4:
Enter the string:
ABCDE
Total vowels = 2
Total digits = 0
*/
#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    int i;
    *totDigits=0;
    *totVowels=0;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
            ++*totDigits;

        else if (str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'
                 ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
                    ++*totVowels;
    }

}

// An smarter way to do
/*void processString(char *str, int *totVowels, int *totDigits)
{
 int i;
 char vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
 char digits[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

 *totVowels = 0;
 *totDigits = 0;

 while(*str != '\0')
 {
     for(i=0; i<10; i++)
     {
         if(*str == vowels[i])
         {
             ++*totVowels;
             break;
         }
         else if(*str == digits[i])
         {
             ++*totDigits;
             break;
         }
     }

     ++str;
 }
}*/
