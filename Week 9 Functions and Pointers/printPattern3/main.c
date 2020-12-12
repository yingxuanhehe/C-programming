/*Write a function that accepts an integer number height (between 1 and 9) as its
parameter, and displays a pattern according to the value of height. For example, if height is 9,
then the following pattern should be printed:
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 0 1
7 8 9 0 1 2 3
8 9 0 1 2 3 4 5
9 0 1 2 3 4 5 6 7
*/
#include <stdio.h>
void printPattern3(int height);
int main()
{
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern3(): \n");
    printPattern3(height);
    return 0;
}
void printPattern3(int height)
{
    int i, j, k;

    for(i=1; i<=height; i++)
    {
        k=i;

        /* Logic to print spaces
        for(j=i; j<height; j++)
        {
            printf(" ");
        }*/

        //logic to print numbers
        for(j=1; j<=i; j++, k++)
            printf("%d", k%10);

        printf("\n");
    }
}
