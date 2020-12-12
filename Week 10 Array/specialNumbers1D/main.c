/*
(specialNumbers1D) A special number is a 3 digit positive integer, in which the sum of the cubes of each
digit is equal to the number. For example, the number 407 is a special number as 407 = 4󫶘 + 0󪧤 +
7󬱟. Write a C function that computes special numbers from 100 up to the a specified number. The
function takes an array of integers ar, num and size as parameters. The parameter num is the specified
integer number. The parameter size is declared as a pointer which will return the size of the array storing
the special numbers to the caller.
(1) Test Case 1:
Enter a number (between 100 and 999):
300
specialNumbers1D(): 153
(2) Test Case 2:
Enter a number (between 100 and 999):
400
specialNumbers1D(): 153 370 371
(3) Test Case 3:
Enter a number (between 100 and 999):
500
specialNumbers1D(): 153 370 371 407
(4) Test Case 4:
Enter a number (between 100 and 999):
999
specialNumbers1D(): 153 370 371 407
*/
#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20],i,size=0,num;
    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int i, sum=0;

    for(i=100; i<num; i++)
    {
        sum = (i%10)*(i%10)*(i%10) + ((i/10)%10)*((i/10)%10)*((i/10)%10) + ((i/100)%10)*((i/100)%10)*((i/100)%10);
        if(sum==i)
        {
            ar[*size] = i;
            (*size)++;
        }
        sum = 0;
    }
}
