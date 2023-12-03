#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, i, min, max;

  printf("Enter the number of elements: ");
  scanf("%d", &num);

  int numbers[num];

  printf("Enter the elements: ");
  for (i = 0; i < num; i++) {
    scanf("%d", &numbers[i]);
  }

  min = numbers[0];
  max = numbers[0];

  for (i = 1; i < num; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }

    if (numbers[i] > max) {
      max = numbers[i];
    }
  }

  int range = max - min;
  printf("The range of the set of numbers is: %d\n", range);

  return 0;
}