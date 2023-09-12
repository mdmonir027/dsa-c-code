#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, r1, r2, dis;

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    dis = (b * b - (4 * a * c));

    if (dis == 0)
    {
        r1 = r2 = -(b / (2 * a));
    }
    else if (dis > 0)
    {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
    }
    else
    {
        printf("Roots are imaginary");
        return 0;
    }
    printf("Roots are %lf and %lf", r1, r2);
}