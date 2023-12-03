#include<stdio.h>
int main(){
    int num,pos = 0,neg = 0, zero = 0;
    char choice;
    do{
        printf("enter a number:");
        scanf("%d",&num);

        if(num  >0){
            pos++;
        }
        elseif(num < 0){
            neg++;
        }
        else{
            zero++;
        }
        print("another number?(Y/N):");
        
        scanf("%c",&choice);
    }while( choice == 'Y'|| choice == 'y');
printf("positive numbers: %d",pos);
printf("negative numbers : %d",neg);
printf("zeros : %d",zero);

return 0;
}