#include <stdio.h>
int main(){

    int x,y,z;
    printf("Enter angles : ");
    scanf("%d %d %d",&x,&y,&z);
    if(x+y+z == 180){
        printf("Valid triangle");
    }
    else
        printf("Invalid triangle");

    return 0;
}