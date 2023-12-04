#include <stdio.h>

int main() {
  int number, limit, product;

  printf("Enter the number: ");
  scanf("%d", &number);

  printf("Enter the limit: ");
  scanf("%d", &limit);

  for (int i = 1; i <= limit; i++) {
    product = number * i;
    printf("%d * %d = %d\n", number, i, product);
  }

  return 0;
}