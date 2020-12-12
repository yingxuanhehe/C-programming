#include <stdio.h>
#include <string.h>

struct student
{
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total; /* total = (testScore+examScore)/2 */
};

double average();

int main()
{
    printf("average(): %.2f\n", average());
    return 0;
}

double average()
{
    /* Write your program code here */
    struct student s[50];
    double total=0;
    int i=0;

    printf("Enter student name: \n");
    scanf("\n");
    gets(s[i].name);

    while(strcmp(s[i].name, "END")!=0)
    {
        printf("Enter test score: \n");
        scanf("%lf", &s[i].testScore);
        printf("Enter exam score: \n");
        scanf("%lf", &s[i].examScore);
        s[i].total = (s[i].testScore + s[i].examScore)/2;
        printf("Student %s total = %.2lf \n", s[i].name, s[i].total);

        total += s[i].total;
        i++;

        printf("Enter student name: \n");
        scanf("\n");
        gets(s[i].name);
    }
    if(i==0)
        return 0;
    return total/i;
}
