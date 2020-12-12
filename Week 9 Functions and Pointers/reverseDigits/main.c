/*Write a C function that takes in a positive integer number, reverses its digits and
returns the result to the calling function. You may assume that the last digit of the input number is
not 0, i.e. the number will not be in the form of 1110, 1200, etc. Write two iterative versions of the
function. The function reverseDigits1() returns the computed result, while reverseDigits2() passes
the result through the pointer parameter result.
(1) Test Case 1:
Enter a number:
12045
reverseDigits1(): 54021
reverseDigits2(): 54021
(2) Test Case 2:
Enter a number:
123
reverseDigits1(): 321
reverseDigits2(): 321
(3) Test Case 3:
Enter a number:
8
reverseDigits1(): 8
reverseDigits2(): 8
*/
#include <stdio.h>
#include <math.h>

int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
    int num, result=999;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("reverseDigits1(): %d\n", reverseDigits1(num));
    reverseDigits2(num, &result);
    printf("reverseDigits2(): %d\n", result);
    return 0;
}
int reverseDigits1(int num)
{
    int rem, result=0;

    while (num != 0)
    {
        rem = num % 10;
        result = result*10 + rem;   //rev = rev*10 + remainder;
        num /= 10;
    }
    return result;
}
void reverseDigits2(int num, int *result)
{
    int rem;
    *result=0;

    while (num != 0)
    {
        rem = num % 10;
        *result = *result * 10 + rem;
        num /= 10;
    }
}
