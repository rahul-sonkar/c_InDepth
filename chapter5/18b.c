#include <stdio.h>

int main()
{

    int x, y;

    switch (x)
    {
    case 1:
        y = x + 1;
        break;

    case 2:
    case 3:
    case 4:
        y++;
        break;

    case 5:
        y--;
        break;

    case 6:
        y = 0;
    }
}