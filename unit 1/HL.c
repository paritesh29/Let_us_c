/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard.
WAP to find the cost price of one item.*/
#include <stdio.h>
int main(){
    
    float totalprice,profit;
    printf("Enter total price : ");
    scanf("%f",&totalprice);
    printf("Enter profit : ");
    scanf("%f",&profit);
    printf("Price of one item = %.4f",(totalprice/15) - (profit/15));

    return 0;

}