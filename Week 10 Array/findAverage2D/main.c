/*
(findAverage2D) Write a C function that takes a 4x4 two-dimensional array of floating point numbers
matrix as a parameter. The function computes the average of the first three elements of each row of the
array and stores it at the last element of the row.
(1) Test Case 1:
Enter data:
1 2 3 0
4 5 6 0
7 8 9 0
1 2 3 0
findAverage2D():
1.00 2.00 3.00 2.00
4.00 5.00 6.00 5.00
7.00 8.00 9.00 8.00
1.00 2.00 3.00 2.00
(2) Test Case 2:
Enter data:
1 2 3 0
4 5 6 0
-4 -5 -6 0
1 2 3 0
findAverage2D():
1.00 2.00 3.00 2.00
4.00 5.00 6.00 5.00
-4.00 -5.00 -6.00 -5.00
1.00 2.00 3.00 2.00
(3) Test Case 3:
Enter data:
1.5 2 2.5 0
4 5 6 0
-4 -5 -6 0
1 2 3 0
findAverage2D():
1.50 2.00 2.50 2.00
4.00 5.00 6.00 5.00
-4.00 -5.00 -6.00 -5.00
1.00 2.00 3.00 2.00
*/
#include <stdio.h>
void findAverage2D(float matrix[4][4]);
int main()
{
    float ar[4][4];
    int i,j;
    printf("Enter data: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            scanf("%f", &ar[i][j]);
    }
    findAverage2D(ar);
    printf("findAverage2D(): \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%.2f ", ar[i][j]);
        printf("\n");
    }
    return 0;
}
void findAverage2D(float matrix[4][4])
{
    int i, j, average, sum=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += matrix[i][j];
            average = sum/3;

        }
        matrix[i][3]=average;
        sum=0;
    }
}
