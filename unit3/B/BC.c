#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    int result = 1;
    for(int i=0;i<b;i++){
        result*=a;

    }
printf("the result of %d raised to the power of %d is %d",a,b,result);

return 0;
}