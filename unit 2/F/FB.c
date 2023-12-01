#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("capital letter");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("smallletter");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("digit");
    }
    else
        printf("special symbol");
}