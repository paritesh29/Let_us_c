/*If a five digit number is input.
 WAP to calculate the sum of its digits.*/
#include <stdio.h>
int main(){
    int N,digit,sum=0;
    printf("Enter the number : ");
    scanf("%d",&N);
    while(N>0){
        digit = N % 10;
        sum += digit; 
        N = N/10;
    }
    printf("Sum = %d",sum);

    return 0;
}