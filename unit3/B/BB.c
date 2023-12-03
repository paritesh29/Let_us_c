#include<stdio.h>
int main(){
    int N, factorial = 1;
    printf("enter a number:");
    scanf("%d",&N);
    if(N < 0){
        printf("Number is negative");
        return 1;
    }
    while(N > 0){
        factorial = factorial*N;
        N--; 
    }
    printf("factorial of number is:",factorial);

return 0;

}