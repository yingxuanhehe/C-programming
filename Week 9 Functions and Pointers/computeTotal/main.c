/*Write a function that accepts an integer numOfLines as parameter, reads in
specified number of lists of numbers according to numOfLines, one list per line, computes the
total for each list and displays the total on the screen. For each list of numbers, the first number
indicates how many elements are in the list. Your function does not need to check user input errors.
(1) Test Case 1:
Enter number of lines:
2
Enter line 1:
3 2 3 4
Total: 9
Enter line 2:
4 1 2 3 4
Total: 10
(2) Test Case 2:
Enter number of lines:
3
Enter line 1:
3 2 3 4
Total: 9
Enter line 2:
4 1 2 3 4
Total: 10
Enter line 3:
2 1 2
Total: 3
*/
#include <stdio.h>
void computeTotal(int numOfLines);
int main()
{
    int numOfLines;
    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}
void computeTotal(int numOfLines)
{
    int i, j, count, num, sum=0;
    for(i=1; i<=numOfLines; i++)
    {
        printf("Enter line %d:\n", i);
        scanf("%d", &count);

        for(j=0; j<count; j++)
        {
            scanf("%d", &num);
            sum+=num;

        }
        printf("Total: %d\n", sum);
        sum=0;

    }

}
