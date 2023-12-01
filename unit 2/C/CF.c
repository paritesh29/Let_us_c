#include <stdio.h>
int main(){

    int Ram, Shyam, Ajay;
    printf("Enter age of Ram : ");
    scanf("%d",&Ram);
    printf("Enter age of Shyam : ");
    scanf("%d",&Shyam);
    printf("Enter age of Ajay : ");
    scanf("%d",&Ajay);

    if(Ram < Shyam && Ram < Ajay){
        printf("Ram");
    }
    else if(Shyam < Ram && Shyam < Ajay){
        printf("Shyam");
    }
    else
        printf("Ajay");

    return 0;
}