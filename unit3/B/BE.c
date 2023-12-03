#include<stdio.h>
int main(){
int num,originalnum,rem,sum = 0;
for(num=1;num<=500;num++){
    originalnum = num;
    while(originalnum!=0){
        rem = originalnum % 10;
        sum+=rem*rem*rem;
        originalnum /= 10;
    }
    if(sum==num){
        printf("%d\n",num);
    }
    sum = 0;
}
return 0;

}