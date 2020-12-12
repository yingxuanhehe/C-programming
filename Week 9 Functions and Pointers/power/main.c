/*Write a function that computes the power p of a positive number num. The power may be
any integer value. Write two iterative versions of the function. The function power1() returns the
computed result, while power2() passes the result through the pointer parameter result. In this
question, you should not use any functioms from the standard math library.
(1) Test Case 1:
Enter the number and power:
2 3
power1(): 8.00
Page 5
power2(): 8.00
(2) Test Case 2:
Enter the number and power:
2 -4
power1(): 0.06
power2(): 0.06
(3) Test Case 3:
Enter the number and power:
2 0
power1(): 1.00
power2(): 1.00
*/
#include <stdio.h>
#include <math.h>

float power1(float num, int p);
void power2(float num, int p, float *result);

int main()
{
    int power;
    float number, result=-1;
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));

    power2(number,power,&result);
    printf("power2(): %.2f\n", result);

    // check using the math lib pow(x,y) = X^y
    printf("\nCorrect answer = %.2f\n", pow(number, power));

    return 0;
}
float power1(float num, int p)
{
    int i;
    float result=1;

    if (p >=0)
    {
        for(i=0; i<p; i++)
        {
            result*=num;
        }
    }
    else   // p is less than 0, division
    {
        for(i=p; i<0; i++)
        {
            result*=1/num;
        }
    }

    return result;
}
void power2(float num, int p, float *result)
{
    int i;
    *result = 1;

    if (p >=0)
    {
        for(i=0; i<p; i++)
        {
            *result*=num;
        }
    }
    else   // p is less than 0, division
    {
        for(i=p; i<0; i++)
        {
            *result*=1/num;
        }
    }
}
