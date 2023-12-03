#include<stdio.h>
int main(){
float overtime = 12.00;
int employeehours[10];
printf("enter working hours of employee: ");
for(int i = 0; i < 10;i++){
    scanf("%d",&employeehours[i]);
}
for(int i = 0;i < 10;i++){
    if(employeehours[i] > 40){
        float overtimehours = employeehours[i] - 40;
        float overtimepay = overtimehours*12.00;
    printf("employee overtime pay: %f", overtimepay);
    }
}
return 0;


}