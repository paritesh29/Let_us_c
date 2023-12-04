#include<stdio.h>
int main() {
  
  float cost_of_machine = 6000.0f;
  float earning_per_year = 1000.0f;
  float salvage_value = 2000.0f;
  float rate_of_interest = 12.0f;

 
  float present_value_of_earnings = 0.0f;
  int n = 1;
  while (present_value_of_earnings < cost_of_machine - salvage_value) {
    present_value_of_earnings += earning_per_year / (1 + rate_of_interest / 100) ** n;
    n++;
  }

  int minimum_life = n;

 printf("Minimum life of the machine: %d years\n", minimum_life);

  return 0;
}