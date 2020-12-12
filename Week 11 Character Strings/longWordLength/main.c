/*
(longWordLength) Write a C function that accepts an English sentence as parameter, and returns the
length of the longest word in the sentence. For example, if the sentence is "I am happy.", then the
length of the longest word "happy" in the sentence 5 will be returned. Assume that each word is a
sequence of English letters.
(1) Test Case 1:
Enter a string:
I am happy.
longWordLength(): 5
(2) Test Case 2:
Enter a string:
There are forty students in the class.
longWordLength(): 8
(3) Test Case 3:
Enter a string:
Good day!
longWordLength(): 4
(4) Test Case 4:
Enter a string:
Hello
longWordLength(): 5
*/
#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    int count=0, max=0;

    while(*s != '\0')
    {
        if((*s >= 'A') && (*s <= 'Z') || (*s >= 'a') && (*s <= 'z'))
            ++count;
        else
            count = 0;

        if(count > max)
            max = count;

        ++s;
    }

    return max;
}
