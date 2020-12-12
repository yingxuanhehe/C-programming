#include <stdio.h>
#define PI 3.1416
int main()
{
    float radius, height, volume, SA;

    printf("Enter the radius:\n");
    scanf("%f", &radius);

    printf("Enter the height:\n");
    scanf("%f", &height);

    volume = PI * (radius * radius) * height;
    SA = (2 * PI * radius * height) + (2 * PI * (radius * radius));


    printf("The volume is: %.2f\n", volume);
    printf("The surface area is: %.2f", SA);

    return 0;
}
