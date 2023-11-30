/* If a five digit number is input through the keyboard.
WAP to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402. */
#include <stdio.h>
int main(){
    int N,result=0,temp;
    printf("Enter number : ");
    scanf("%d",&N);

    //adding +1
    while(N>0){
        int digit = N%10;
        if(digit==9){
            digit=0;
        }else
            digit++;
        temp = temp*10+digit;
        N/=10;
    }

    //reversing
    while(temp>0){
        int digit = temp%10;
        result = result*10+digit;
        temp/=10;
    }

    printf("%d",result);

    return 0;
}