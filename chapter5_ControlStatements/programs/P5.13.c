//Program to convert a binary number to a decimal number.

#include <stdio.h>
// #include <math.h>

int main(){
    int binary, decimal = 0, power = 1;
    printf("Enter binary number : ");
    scanf("%d", &binary);
    while (binary!=0)
    {
        // int i=0,pow = 1;
        // while (i < power)
        // {
        //     pow *= 2;
        //     i++;
        // }

        decimal += power * (binary%10);
        binary /= 10;
        power *= 2;
    }
    printf("%d\n", decimal);
}