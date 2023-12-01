#include <stdio.h>
int main(){

    float cp,sp;
    printf("Enter cost price and selling price: ");
    scanf("%d %d",&cp,&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(sp<cp){
        printf("Loss");
    }
    else
        printf("No profit or loss");

    return 0;
}