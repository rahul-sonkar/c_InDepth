#include <stdio.h>

int main(){
    int i = 1, j = 1;

    while (i<5&&j!=0)
    {
        printf("%d",(j--,i++));
    }
}