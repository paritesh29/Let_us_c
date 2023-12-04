#include <stdio.h>

int main() {
  
  int num_sets;
  printf("Enter the number of sets of data: ");
  scanf("%d", &num_sets);

    for (int i = 0; i < num_sets; i++) {
    
    float principal;
    printf("Enter the principal amount (set %d): ", i + 1);
    scanf("%f", &principal);

    
    float annual_interest_rate;
    printf("Enter the annual interest rate (set %d): ", i + 1);
    scanf("%f", &annual_interest_rate);

   
    int num_years;
    printf("Enter the number of years (set %d): ", i + 1);
    scanf("%d", &num_years);

  
    int compounding_frequency;
    printf("Enter the compounding frequency (set %d): ", i + 1);
    scanf("%d", &compounding_frequency);
        float compounded_amount = principal * pow(1 + annual_interest_rate / (100.0f * compounding_frequency), compounding_frequency * num_years);

        printf("Compounded amount (set %d): %.2f\n", i + 1, compounded_amount);
  }

  return 0;
}
