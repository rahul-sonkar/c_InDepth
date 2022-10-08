#include <stdio.h>

int main(){
    int i, j;

    for (j = i + 1, i = 1; i <= 5;i++,j++)
        printf("%d\t%d\n", i, j);
}