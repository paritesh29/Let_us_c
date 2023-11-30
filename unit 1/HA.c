/* ramesh basic salary is input 
dearnes allowance is 40% of  his basic salary
20% of absic salary is his house rent
W.A.P for gross salary of ramesh */
#include<studio.h>
int main(){
    float dearness,basic,rent,gross;
    printf("Enter the  basic salary : ");
    scanf("%f",&basic);
    dearness = (basic*40)/100;
    rent = (basic*20)/100;
    gross = basic + rent + dearness;

    printf("%f",gross);
    return 0; 
}