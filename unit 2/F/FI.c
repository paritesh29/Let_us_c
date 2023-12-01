#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter marks in subject A and B: ");
    scanf("%d%d", &a, &b);

    if (a >= 55 && b >= 45)
    {
        printf("The student has passed.");
    }
    else if (a >= 45 && a < 55 && b >= 55)
    {
        printf("The student has passed.");
    }
    else if (a >= 65 && b < 45)
    {
        printf("The student is allowed to reappear in the B exam.");
    }
    else
    {
        printf("The student has failed.");
    }
}