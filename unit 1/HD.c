/*Temperature of a city in Fahrenheit degrees is input through 
the keyboard.
WAP to convert the temperature into Centigrade degrees. */
#include <stdio.h>
int main(){
    float ft,deg;
    printf("Enter the temprature : ");
    scanf("%f",&ft);
    deg = (ft-32) * 5/9;
    printf("%0.4f dF = %0.4f dC",ft,deg);

    return 0;
}