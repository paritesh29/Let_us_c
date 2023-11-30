/*If a five digit number is input,
WAP to reverse the number.*/
#include <stdio.h>
int main(){
    int N,digit,rev=0;
    printf("Enter the number : ");
    scanf("%d",&N);
    while(N>0){
        digit = N%10;
        rev = rev*10+digit;
        N = N/10;
    }
 printf("Reverse = %d",rev);

    return 0;
}