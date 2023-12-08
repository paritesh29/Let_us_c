#include <stdio.h>
int main()
{

    // outer loop for rows
    for (int i = 1; i <= 5; i++)
    {

        //  loop  for leading white spaces
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }

        int C = 1; // coefficient

        //  loop  for printing numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
}