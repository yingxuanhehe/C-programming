/*
(findMinMaxStr) Write a C function that reads in words separated by space, finds the first and last
words according to ascending alphabetical order (based on ASCII values), and returns them to the calling
function through the string parameters first and last. The calling function will then print the first and last
strings on the screen.
(1) Test Case 1:
Enter size:
4
Enter 4 words:
Peter Paul John Mary
First word = John, Last word = Peter
(2) Test Case 2:
Enter size:
1
Enter 1 words:
Peter
First word = Peter, Last word = Peter
(3) Test Case 3:
Enter size:
2
Enter 2 words:
Peter Mary
First word = Mary, Last word = Peter
*/
#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int
                   size);
int main()
{
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i=0; i<size; i++)
        scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);
    return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int
                   size)
{
    int i;

    strcpy(first, word[0]);  //first = word[i] IS WRONG!!!
    strcpy(last, word[0]);

    for(i=0; i<size; i++)
    {
        if(strcmp(word[i], first)<0)
            strcpy(first, word[i]);  //first = word[i] IS WRONG!!!
        else if(strcmp(word[i], last)>0)
            strcpy(last, word[i]);
    }
}
