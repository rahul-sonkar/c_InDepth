#include <stdio.h>

int main(){
    int i = 2;

    for (;;)
        if(i++==3)
            break;
    printf("i=%d\n", i);

    i = 1;
    while (1)
        if(i++==3)
            break;
    printf("i=%d\n", i);
}