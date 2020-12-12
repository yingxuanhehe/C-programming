/*
A square matrix (2-dimensional array of equal dimensions) can be reduced to uppertriangular
form by setting each diagonal element to the sum of the original elements in
that column and setting to 0s all the elements below the diagonal. For example, the 4by4 matrix:
4 3 8 6
9 0 6 5
5 1 2 4
9 8 3 7
would be reduced to
27 3 8 6
0 9 6 5
0 0 5 4
0 0 0 7
*/
#include <stdio.h>
#define SIZE 10
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);

    reduceMatrix2D(ar, rowSize, colSize);
    printf("reduceMatrix2D(): \n");
    display(ar, rowSize, colSize);
    return 0;
}
void display(int ar[][SIZE], int rowSize, int colSize)
{
    int l,m;
    for (l = 0; l < rowSize; l++)
    {
        for (m = 0; m < colSize; m++)
            printf("%d ", ar[l][m]);
        printf("\n");
    }
}
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i, j, sum; // i for row, j for column

    /* for each column */
    for (j = 0; j < colSize; j++)
    {
        sum = 0;

        // process the row below matrix[j][j] of the column
        for (i = j+1; i < rowSize; i++)
        {
            sum += ar[i][j];
            ar[i][j] = 0;
        }
        ar[j][j] += sum;
    }
}
