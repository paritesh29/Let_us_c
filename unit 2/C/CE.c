#include <stdio.h>
int main(){
    int N,digit,rev=0;

    printf("Enter the number : ");
    scanf("%d",&N);
    int temp = N;

    while(N > 0){
        digit = N%10;
        rev = rev*10+digit;
        N = N/ 10;
    }

    printf("Reverse = %d\n",rev);

    if(temp == rev){
        printf("Original Number and Reverse are same\n");       
    }else
        printf("Original Number and Reverse are not same");

    return 0;
}