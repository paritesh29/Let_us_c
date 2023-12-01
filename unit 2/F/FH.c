#include <stdio.h>
int main()
{
    int hour;
    printf("Enter the working hour of a worker : ");
    scanf("%d", &hour);
    if (hour >= 2 && hour < 3)
        printf("The worker is highly efficient");
    else if (hour >= 3 && hour < 4)
        printf("The worker is ordered to improve is speed");
    else if (hour >= 4 && hour <= 5)
        printf("The worker is given training to improve his speed");
    else
        printf("The worker will leave the company");
}