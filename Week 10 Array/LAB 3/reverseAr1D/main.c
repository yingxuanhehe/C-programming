#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
    int ar[10];
    int size, i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i <= size-1; i++)
        scanf("%d", &ar[i]);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0)
    {
        for (i=0; i<size; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}
void printReverse1(int ar[], int size)
{
    int i;

    printf("printReverse1(): ");

    //print in reverse using index notation
    for(i=size-1; i>=0; i--)
        printf("%d ", ar[i]);

    //new line
    printf("\n");
}
void printReverse2(int ar[], int size)
{
    int i;

    printf("printReverse2(): ");

    //print in reverse using pointer notation
    for(i=size-1; i>=0; i--)
        printf("%d ", *(ar+i));

    //new line
    printf("\n");
}
void reverseAr1D(int ar[ ], int size)
{
    int i, temp;

    //reverse Array
    //size/2 as after the middle point, 1 and n-1, etc will swap back to original space
    if(size>0)
    {
        for(i=0; i<size/2; i++)
        {
            temp = ar[size-1-i];
            ar[size-1-i] = ar[i];
            ar[i] = temp;
        }
    }
}
