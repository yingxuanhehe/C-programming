/* employeeApp */
#include <stdio.h>
#define SIZE 2
struct employee
{
    struct
    {
        char firstname[20];
        char lastname[20];
    } names;

    int age;
    char gender;
    float salary;
};
void readEmployee(struct employee *emp);
void printEmployee(struct employee emp[SIZE]);

int main()
{
    struct employee e[SIZE];
    int i;
    printf("Enter %d records: ", SIZE);
    for (i=0; i<SIZE; i++)
    {
        readEmployee(&e[i]);
    }
    printEmployee(e);
    return 0;
}
void readEmployee(struct employee *emp)
{
    printf("\nEnter names (firstname lastname): ");
    scanf("%s %s", (emp->names).firstname, (emp->names).lastname);
    printf("Enter age: ");
    scanf("\n");
    scanf("%d", &(emp->age));
    printf("Enter gender: ");
    scanf("\n");
    scanf("%c", &emp->gender);
    printf("Enter salary: ");
    scanf("%f", &emp->salary);
}
void printEmployee(struct employee emp[SIZE])
{
    int i;
    printf("Print employee data: \n");
    for (i=0; i<SIZE; i++)
    {
        printf("%s %s %d %c %f\n", emp[i].names.firstname,
               emp[i].names.lastname, emp[i].age, emp[i].gender,
               emp[i].salary);
    }
}
