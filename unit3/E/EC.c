#include <stdio.h>

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

float sum(int n) {
  float sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (float)i / factorial(i);
  }
  return sum;
}

int main() {
  int n = 7;
  printf("Sum of the series: %f", sum(n));
}