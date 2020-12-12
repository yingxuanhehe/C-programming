/*
(compress2D) Write a function that takes as input a square 2-dimensional array of binary data,
compresses each row of the array by replacing each run of 0s or 1s with a single 0 or 1 and the number of
times it occurs, and prints on each line the result of compression. For example, the row with data
0011100011 may be compressed into 02130312.
(1) Test Case 1:
Enter the array size (rowSize, colSize):
4 4
Enter the matrix (4x4):
1 1 1 0
0 0 1 1
1 1 1 1
0 0 0 0
compress2D():
1 3 0 1
0 2 1 2
1 4
0 4
(2) Test Case 2:
Enter the array size (rowSize, colSize):
5 5
Enter the matrix (5x5):
1 1 1 0 0
0 0 1 1 1
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
compress2D():
1 3 0 2
0 2 1 3
1 5
0 5
1 5
(3) Test Case 3:
Enter the array size (rowSize, colSize):
5 5
Enter the matrix (5x5):
0 0 0 0 0
1 1 1 1 1
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
compress2D():
0 5
1 5
1 5
0 5
1 5
*/
#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int i, j, count=1;

    for(i=0; i<rowSize; i++)
    {
        for(j=0; j<colSize; j++)
        {
            if(j==colSize-1) //if reach last column in the row
            {
                printf("%d %d \n", data[i][j], count);
                count=1;
            }

            else if(data[i][j]==data[i][j+1])
                count++;

            else if(data[i][j]!=data[i][j+1])
            {
                printf("%d %d ", data[i][j], count);
                count=1;
            }
        }
    }
}
