/*the distance b/w to cities is in km 
WAP to convert and print the distance in meter, feet, inches and centimeters 
*/
#include<stdio.h>
int main(){
    float distance,meters,feet,cm,inches;
    printf("Enter the distance : ");
    scanf("%f",&distance);
    meters = distance*1000;
    feet = distance*3281;
    inches = distance*39370.1;
    cm = distance*100000;
    printf("meters = %fm\nfeet = %ffeet\ninches = %finches\ncm = %fcm");

    return 0;
 }