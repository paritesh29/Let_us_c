#include<stdio.h>

void heart() {
    printf("%c", 3);
}

void diamond() {
    printf("%c", 4);
}

int main() {
    int i, j;

    
    for (i = 0; i < 25; i++) {
        for (j = 0; j < 80; j++) {
            if ((i + j) % 2 == 0) {
                diamond();
            } else {
                heart();
            }
        }
        printf("\n");
    }

   return 0;
}