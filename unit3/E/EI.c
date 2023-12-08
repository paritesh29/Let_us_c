#include <stdio.h>
int main()
{
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j <= 4 - i - 2)
            {
                printf(" ");
            }
            else
            {
                printf("%d ", num);
                num++;
            }
        }

        printf("\n");
    }
}