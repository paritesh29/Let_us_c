#include <stdio.h>
int main()
{
    int health, age, area, gender;
    printf("Enter the age of person:");
    scanf("%d", &age);
    printf("Enter the health of person 1 for excellent and 0 for poor:");
    scanf("%d", &health);
    printf("Enter the area of person 1 for city and 0 for village:");
    scanf("%d", &area);
    printf("Enter the gender of person 1 for male and 0 for female:");
    scanf("%d", &gender);
    if (age >= 25 && age <= 35)
    {
        if (health == 1)
        {
            if (gender == 1 && area == 1)
            {
                printf("The person should be insured. Premium rate: Rs. 4 per thousand Maximum amount: Rs. 2 lakhs");
            }
            else if (gender == 0 && area == 1)
            {
                printf("The person should be insured. Premium rate: Rs. 3 per thousand .Maximum amount: Rs. 1 lakh");
            }
            else if (gender == 1 && area == 0)
            {
                printf("The person should be insured. Premium rate: Rs. 6 per thousand. Maximum amount: Rs. 10,000");
            }
        }
        else
        {
            if (gender == 1 && area == 0)
            {
                printf("The person should be insured. Premium rate: Rs. 6 per thousand.Maximum amount: Rs. 10,000");
            }
            else
            {
                printf("The person cannot be insured.\n");
            }
        }
    }
    else
    {
        printf("The person cannot be insured.");
    }
}