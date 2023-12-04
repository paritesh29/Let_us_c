#include<stdio.h>
int main(){
char smiley = 1;
for(int i = 0;i < 25;i++){
    for(int j = 0;j < 80;j++){
        printf("%c",smiley);
    }
    printf("\n");
}
return 0;

}