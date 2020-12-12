/*Write a function that extracts the even digits from a positive number, and
combines the even digits sequentially into a new number. The new number is returned to the
calling function. If the input number does not contain any even digits, then the function returns -1.
For example, if the input number is 1234567, then 246 will be returned; and if the input number is
13, then –1 will returned. You do not need to consider the input number such as 0, 20, 3033, etc.
Write the function in two versions. The function extEvenDigits1() returns the result to the
caller, while the function extEvenDigits2() returns the result through the pointer parameter,
result.
(1) Test Case 1:
Enter a number:
1234
extEvenDigits1(): 24
extEvenDigits2(): 24
(2) Test Case 2:
Enter a number:
1357
extEvenDigits1(): -1
extEvenDigits2(): -1
(3) Test Case 3:
Enter a number:
2468
extEvenDigits1(): 2468
extEvenDigits2(): 2468
(4) Test Case 4:
Enter a number:
6
extEvenDigits1(): 6
extEvenDigits2(): 6
*/
#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}
int extEvenDigits1(int num)
{
    int i=1, newValue=0;

    while(num != 0)
    {
        if(num%2 == 0)
        {
            newValue += (num % 10) * i;
            i *= 10;
        }

        num /= 10;
    }
    return (newValue != 0) ? newValue : -1;
}
void extEvenDigits2(int num, int *result)
{
    int i=1;
    *result=0;
    while(num != 0)
    {
        if(num%2 == 0)
        {
            *result += (num % 10) * i;
            i *= 10;
        }

        num /= 10;
    }

    if(*result == 0)
        *result = -1;
}
