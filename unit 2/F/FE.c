#include <stdio.h>
int main()
{
    float chrg;
    int day;
    printf("Enter the days: ");
    scanf("%d", &day);

    if (day <= 5)
        printf("Your fine is 0.5 rs");

    if (day > 5 && day < 11)
        printf("Your fine is 1 rs");

    if (day > 10 && day < 31)
        printf("Your fine is 5 rs");

    if (day > 30)
        printf("library membership has been cancelled.");
}