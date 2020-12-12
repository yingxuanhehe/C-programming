/*
(absoluteSum1D) Write a C function that returns the sum of the absolute values of the elements of a
vector with the following prototype:
float absoluteSum1D(int size, float vector[]);
where size is the number of elements in the vector.
(1) Test Case 1:
Enter vector size:
5
Enter 5 data:
1.1 3 5 7 9
absoluteSum1D(): 25.10
(2) Test Case 2:
Enter vector size:
2
6
Enter 6 data:
1 -3 5 -7 9 -2
absoluteSum1D(): 27.00
*/
#include <stdio.h>
#include <math.h>
float absoluteSum1D(int size, float vector[]);
int main()
{
    float vector[10];
    int i, size;
    printf("Enter vector size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%f", &vector[i]);
    printf("absoluteSum1D(): %.2f", absoluteSum1D(size, vector));
    return 0;
}
float absoluteSum1D(int size, float vector[])
{
    int i;
    float sum=0;

    for(i=0; i<size; i++)
        sum += fabs(vector[i]);

    return sum;

}
