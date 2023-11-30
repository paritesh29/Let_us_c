/*Two numbers are input into two locations C and D. 
WAP to interchange the contents of C and D*/
#include <stdio.h>
int main(){
    int C,D;
    printf("Enter C and D : ");
    scanf("%d %d",&C,&D);
    C = C+D;
    D = C-D;
    c = C-D;
    printf("C = %d\nD = %d",C,D);

    return 0;
}