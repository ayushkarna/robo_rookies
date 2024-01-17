#include <stdio.h>
#include <math.h>

int main()
{
    int radius = 10;
    int x, y;

    for (y = -radius; y <= radius; y++)
    {
        for (x = -radius; x <= radius; x++)
        {
            if (sqrt(x * x + y * y) <= radius)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
