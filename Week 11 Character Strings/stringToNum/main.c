#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char ar[80];
    int i, num;
    scanf("%s", ar); // read input string

    i=0;
    while (isdigit(ar[i])) // check digit in string
           i++; // until not a digit

    if (ar[i] != '\0') // if not a null character
        printf("The input is not a number\n");
    /* for example, “1a2” */

    else
        {
            num = atoi(ar);
            printf("Input is %d\n", num);
        }
}
