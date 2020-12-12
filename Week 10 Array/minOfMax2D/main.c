/*
(minOfMax2D) Write a C function minOfMax2D() that takes a two-dimensional array matrix of
integers ar, and the array sizes for the rows and columns as parameters. The function returns the
minimum of the maximum numbers of each row of the 2-dimensional array ar. For example, if the
rowSize is 4, colSize is 4, and ar is {{1,3,5,2}, {2,4,6,8}, {8,6,4,9}, {7,4,3,2}}, then the maximum
numbers will be 5, 8, 9 and 7 for rows 0, 1, 2 and 3 respectively, and the minimum of the maximum
numbers will be 5.
(1) Test Case 1:
Enter row size of the 2D array:
4
Enter column size of the 2D array:
4
Enter the matrix (4x4):
1 2 3 4
2 3 4 5
5 6 7 8
8 10 2 4
minOfMax2D(): 4
(2) Test Case 2:
Enter row size of the 2D array:
3
Enter column size of the 2D array:
3
Enter the matrix (3x3):
1 -3 3
-3 2 4
3 6 -8
minOfMax2D(): 3
(3) Test Case 3:
Enter row size of the 2D array:
5
Enter column size of the 2D array:
5
Enter the matrix (5x5):
1 2 3 4 5
2 3 4 5 6
5 6 7 8 9
8 10 2 4 7
2 3 4 5 8
minOfMax2D(): 5
*/
#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j,min;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);
    min=minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);
    return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i, j, max, min;

    for(i=0; i<rowSize; i++)
    {
        max=ar[i][0];

        for(j=0; j<colSize; j++)
        {
            if(ar[i][j]>max)
                max=ar[i][j];
        }
        ar[i][colSize-1]=max;     //stores the row's max number in the last column of the wor
    }

    //assign first row's maximum to be min
    min=ar[0][colSize-1];

    //compare all the row's maximum
    for(i=1; i<rowSize; i++)
    {
        if(ar[i][colSize-1] < min)
            min=ar[i][colSize-1];
    }
    return min;
}
