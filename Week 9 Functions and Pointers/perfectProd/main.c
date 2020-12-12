/*A perfect number is one that is equal to the sum of all its factors (excluding the
number itself). For example, 6 is perfect because its factors are 1, 2, and 3, and 6 = 1+2+3; but 24
is not perfect because its factors are 1, 2, 3, 4, 6, 8, 12, but 1+2+3+4+6+8+12 = 36. Write a
function that takes a number, num, prints the perfrct numbers that are less than the number, and
returns the product of all perfect numbers. For example, if the number is 100, the function should
return 168 (which is 6*28), as 6 and 28 are the only perfect numbers less than 100. If there is no
perfect number for the input number, then the function should return 1. Write the function in two
versions. The function perfectProd1() returns the result to the caller, while perfectProd2() passes
the result through the pointer parameter result.
(1) Test Case 1:
Enter a number:
100
Page 6
Calling perfectProd1()
Perfect number: 6
Perfect number: 28
perfectProd1(): 168
Calling perfectProd2()
Perfect number: 6
Perfect number: 28
perfectProd2(): 168
(2) Test Case 2:
Enter a number:
500
Calling perfectProd1()
Perfect number: 6
Perfect number: 28
Perfect number: 496
perfectProd1(): 83328
Calling perfectProd2()
Perfect number: 6
Perfect number: 28
Perfect number: 496
perfectProd2(): 83328
(3) Test Case 3:
Enter a number:
1000
Calling perfectProd1()
Perfect number: 6
Perfect number: 28
Perfect number: 496
perfectProd1(): 83328
Calling perfectProd2()
Perfect number: 6
Perfect number: 28
Perfect number: 496
perfectProd2(): 83328
*/

#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
    int number, result=0;
    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));

    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    int prod= 1, i, j, perNum;

    for(i=1; i<num; i++)
    {
        perNum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                perNum+=j;
        }
        if(perNum==i)
        {
            printf("Perfect number: %d\n", perNum);
            prod*= perNum;
        }
    }
    return prod;
}
void perfectProd2(int num, int *prod)
{
    int i, j, perNum;

    *prod = 1;

    for(i=1; i<num; i++)
    {
        perNum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                perNum+=j;
        }
        if(perNum==i)
        {
            printf("Perfect number: %d\n", perNum);
            *prod*= perNum;
        }
    }
}
