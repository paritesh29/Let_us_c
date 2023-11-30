/*If a four digit number is input.
WAP to obtain the sum of the first and last digit of the number*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,digit,sum=0;
    printf("Enter 4 digit number : ");
    scanf("%d",&N);
    int first = N/1000,last = N%10;
    printf("Sum of first and last digits = %d",first + last);

    return 0;
}