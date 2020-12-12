#include <stdio.h>
struct example
{
    struct
    {
        int x;
        int y;
    } in;
    int a;
    int b;
};
int main()
{
    struct example e[2];
    struct example *p;
    e[0].a = 1;
    e[0].b = 2;
    e[0].in.x = e[0].a * e[0].b;
    e[0].in.y = e[0].a + e[0].b;
    printf("%d, %d\n", e[0].in.x, e[0].in.y);
    e[1].a = 3;
    e[1].b = 4;
    e[1].in.x = e[1].a * e[1].b;
    e[1].in.y = e[1].a + e[1].b;
    printf("%d, %d\n", e[1].in.x, e[1].in.y);


    p = e;
    printf("%d, %d\n", p->in.x, p->in.y);
    printf("%d, %d\n", ++p->in.x, ++p->in.y); //++(p->in.x)
    printf("%d, %d\n", (p+1)->in.x, (p+1)->in.y);
    return 0;
}
