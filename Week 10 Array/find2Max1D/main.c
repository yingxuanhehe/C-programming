/*
(find2Max1D) Write a C function find2Max1D() that takes an one-dimensional array of integer
numbers ar and size (>1) as parameters. The function returns the largest and second largest numbers of
the array to the calling function through the two pointer parameters max1 and max2 respectively. For
example, if the array a[]={1,7,8,6,9,4,5,2,3}, then max1 is 9, and max2 is 8. In this question, you may
assume that the input data contains unique integers.
(1) Test Case 1:
Enter array size:
5
Enter 5 data:
1 2 3 5 6
Max1: 6
Max2: 5
(2) Test Case 2:
Enter array size:
6
Enter 6 data:
-4 0 -7 3 2 1
Max1: 3
Max2: 2
(3) Test Case 3:
Enter array size:
2
Enter 2 data:
6 5
Max1: 6
Max2: 5
3
(4) Test Case 4:
Enter array size:
3
Enter 3 data:
-4 -7 -3
Max1: -3
Max2: -4
*/
#include <stdio.h>
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
    int max1,max2;
    int ar[10],size,i;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
    find2Max1D(ar,size,&max1,&max2);
    printf("Max1: %d\nMax2: %d\n",max1,max2);
    return 0;
}
void find2Max1D(int ar[], int size, int *max1, int *max2)
{
    *max1 = ar[0];
    *max2 = ar[0];

    for(int i=0; i<size; i++)
    {
        if(ar[i]>(*max1))
            *max1 = ar[i];

    }

    for(int j=0; j<size; j++)
    {
        if(((ar[j])<(*max1)) && ((ar[j])>(*max2)))
            *max2 = ar[j];
    }
}
