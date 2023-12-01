#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle : ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a < (b + c)) && (b < (a + c)) && c < (b + a))
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid");
}