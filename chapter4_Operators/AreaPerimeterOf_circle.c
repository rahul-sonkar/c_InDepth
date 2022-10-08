#include <stdio.h>
#include <math.h>
int main()
{
    double radius;
    printf("Enter radius of circle  : ");
    scanf("%lf", &radius);

    printf("Area of circle : %.4lf\n", M_PI * radius * radius);
    printf("Perimeter of circle : %.4lf\n", 2 * M_PI * radius);
}