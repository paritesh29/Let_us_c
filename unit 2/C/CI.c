#include <stdio.h>
int main(){
    float l,b,area,perimeter;

    printf("Enter lenght, breadth and radius : ");
    scanf("%f %f",&l,&b);

    area = l*b;
    perimeter = 2*(l+b);

    if(area > perimeter){
        printf("Yes");
    }else
        printf("No");

     return 0;
}