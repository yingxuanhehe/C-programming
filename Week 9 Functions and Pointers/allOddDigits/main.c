/*Write a function that returns either 1 or 0 according to whether or not all the digits of the positive
integer argument number are odd. For example, if the input argument is 1357, then the function
should return 1; and if the input argument is 2467, then 0 should be returned. Write the function in
two versions. The function allOddDigits1() returns the result to the caller, while
allOddDigits2() passes the result through the pointer parameter, result.
(1) Test Case 1:
Enter a number:
1357
allOddDigits1(): yes
allOddDigits2(): yes
(2) Test Case 2:
Enter a number:
2467
allOddDigits1(): no
allOddDigits2(): no
(3) Test Case 3:
Enter a number:
Page 2
13
allOddDigits1(): yes
allOddDigits2(): yes
(4) Test Case 4:
Enter a number:
2468
allOddDigits1(): no
allOddDigits2(): no
*/

#include <stdio.h>
int allOddDigits1(int num);
void allOddDigits2(int num, int *result);
int main()
{
    int number, p=999, result=999;
    printf("Enter a number: \n");
    scanf("%d", &number);
    p = allOddDigits1(number);
    if (p == 1)
        printf("allOddDigits1(): yes\n");
    else
        printf("allOddDigits1(): no\n");
    allOddDigits2(number, &result);
    if (result == 1)
        printf("allOddDigits2(): yes\n");
    else
        printf("allOddDigits2(): no\n");
    return 0;
}
int allOddDigits1(int num)
{
    while(num != 0)
   {
       if(num%2 != 1)
        return 0;

       num /= 10;
   }

   return 1;

}
void allOddDigits2(int num, int *result)
{
    *result = 1;

   while(num != 0)
   {
       if(num%2 != 1)
        *result = 0;

       num /= 10;
   }
}
