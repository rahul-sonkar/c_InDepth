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
        x = 0;
        y = 0;
        break;

    case 3:
    case 4:
    case 5:
        y++;
        break;

    case 6:
        y += 4;
        break;

    default:
        y--;
    }
}