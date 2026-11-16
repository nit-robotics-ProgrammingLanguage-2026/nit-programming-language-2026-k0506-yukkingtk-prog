
#include <stdio.h>

int main(void)
{
    double r;

    scanf("%lf", &r);

    if (r > 0)
    {
        printf("%.2f", r * r * 3.141592653589793);
    }
    else
    {
        printf("NG");
    }

    return 0;
}
