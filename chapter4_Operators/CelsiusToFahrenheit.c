#include <stdio.h>

int main()
{
    double celsius;
    printf("Enter temperature in celsius..: ");
    scanf("%lf", &celsius);

    printf("%.1lf\n", (celsius * (9.0 / 5)) + 32);
}