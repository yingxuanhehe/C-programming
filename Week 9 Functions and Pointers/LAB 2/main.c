/*(numDigits) Write a function that counts the number of digits for a non-negative
integer. For example, 1234 has 4 digits. The function numDigits1() returns the result.
Write another function numDigits2() that passes the result through the pointer
parameter, result.

(digitPos) Write the function digitPos1() that returns the position of the first appearance
of a specified digit in a positive number. The position of the digit is counted from the
right and starts from 1. If the required digit is not in the number, the function should
return 0. For example, digitPos1(12315, 1) returns 2 and digitPos1(12, 3) returns 0.
Write another function digitPos2() that passes the result through the pointer parameter,
result. For example, if num = 12315 and digit = 1, then *result = 2 and if num=12 and
digit = 3, then *result = 0.

(square) Write a function square1() that returns the square of a positive integer
number num, by computing the sum of odd integers starting with 1 as shown in the
example below. The result is returned to the calling function. For example, if num =
4, then 42 = 1 + 3 + 5 + 7 = 16 is returned; if num = 5, then 52 = 1 + 3 + 5 + 7 + 9 = 25 is
returned.
Write another function square2() that passes the result through the pointer parameter,
result. For example, if num = 4, then *result = 42 = 1 + 3 + 5 + 7 = 16; if num = 5, then
*result = 52 = 1 + 3 + 5 + 7 + 9 = 25.
*/

#include <stdio.h>
/* function prototypes */
int numDigits1(int num);
int digitPos1(int num, int digit);
int square1(int num);
void numDigits2(int num, int *result);
void digitPos2(int num, int digit, int *result);
void square2(int num, int *result);
int main()
{
    int choice;
    int number, digit, result=0;
    do
    {
        printf("\nPerform the following functions ITERATIVELY:\n");
        printf("1: numDigits1()\n");
        printf("2: numDigits2()\n");
        printf("3: digitPos1()\n");
        printf("4: digitPos2()\n");
        printf("5: square1()\n");
        printf("6: square2()\n");
        printf("7: quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("numDigits1(): %d\n", numDigits1(number));
            break;
        case 2:
            printf("Enter the number: \n");
            scanf("%d", &number);
            numDigits2(number, &result);
            printf("numDigits2(): %d\n", result);
            break;
        case 3:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("Enter the digit: \n");
            scanf("%d", &digit);
            printf("digitPos1(): %d\n", digitPos1(number, digit));
            break;
        case 4:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("Enter the digit: \n");
            scanf("%d", &digit);
            digitPos2(number, digit, &result);
            printf("digitPos2(): %d\n", result);
            break;
        case 5:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("square1(): %d\n", square1(number));
            break;
        case 6:
            printf("Enter the number: \n");
            scanf("%d", &number);
            square2(number, &result);
            printf("square2(): %d\n", result);
            break;
        default:
            printf("Program terminating .....\n");
            break;
        }
    }
    while (choice < 7);
    return 0;
}
/* add function code here */
int numDigits1(int num)
{
    int count = 0;
    do
    {
        count++;
        num = num/10;
    }
    while (num > 0);
    return count;

}
void numDigits2(int num, int *result)
{
    *result=0;
    do
    {
        (*result)++;
        num/=10;
    }
    while(num > 0);
}
int digitPos1(int num, int digit)
{
    int pos=0;
    do
    {
        pos++;
        if (num%10 == digit)
            return pos;
        num/=10;
    }
    while(num>0);
    return 0;
}
void digitPos2(int num, int digit, int *result)
{
    int pos=0;
    *result=0;
    do
    {
        pos++;
        if (num%10 == digit)
        {
            *result = pos;
            break;
        }
        num = num/10;
    }
    while (num > 0);
}
int square1(int num)
{
    int count=0, k=1, result=0;

    while(count<num)
    {
        result+=k;
        k+=2;
        count++;
    }
    return result;
}
void square2(int num, int *result)
{
    int count=0, k=1;
    *result=0;

    while (count < num)
    {
        *result += k;
        k += 2;
        count++;
    }
}
