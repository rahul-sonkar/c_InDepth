#include <stdio.h>

int main(){
    float a, b, c, d, e;
    printf("enter marks : ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    float avg = (a + b + c + d + e) / 5;
    printf("%f\n", avg);
}