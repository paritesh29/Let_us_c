/*The length & breadth of a rectangle and radius of a circle are 
input.
WAP to calculate the area and perimeter of the rectangle, and the area & circumference of the circle.*/
#include <stdio.h>
int main(){
    float l,b,r,area_rec,perimeter,area_circle,circumference;
    printf("Enter lenght, breadth and radius : ");
    scanf("%f %f %f",&l,&b,&r);
    area_rec = l*b;
    perimeter = 2*(l+b);
    area_circle = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("Area of rect = %.3f\nPerimeter of rect = %.3f\nArea of circle = %.3f\nCircumference = %.3f",area_rec,perimeter,area_circle,circumference);

    return 0;
}