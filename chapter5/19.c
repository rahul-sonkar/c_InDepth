#include <stdio.h>

int main()
{
    int x, y, z;
    x = 30, y = 5;

    if (x == 10)
    {
        z++;
    }
    else if (x == 20)
    {
        z--;
    }
    else if (x == 30)
    {
        if (y == 2)
        {
            z = z + 3;
        }
        else if (y == 4 || y == 5)
        {
            z = z + 10;
        }
        else
        {
            z = z - 2;
        }
    }
    else
    {
        z = 0;
    }
}