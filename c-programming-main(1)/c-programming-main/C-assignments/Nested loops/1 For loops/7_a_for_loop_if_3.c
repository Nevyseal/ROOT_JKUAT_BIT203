#include <stdio.h>

void main()
{
    int xAxis, yAxis;
    int space, counter = 5;

    printf("\n\n");

    for (yAxis = 1; yAxis <= 6; yAxis++)
    {
        for (xAxis = 6; xAxis >= 1; xAxis--)
        {
            if (yAxis == 1 || yAxis == 6)
            {
                printf(" * ");
            }
            else if (yAxis == xAxis)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
}