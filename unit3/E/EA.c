#include<stdio.h>
int main(){
    for(int i = 1;i <= 300;i++){
        for(int j = 2;j < i;j++){
            if(i%j==0){
                break;
            }
            }
            if(i!=1){
                printf("%d\n",i);
            }
    }
    return 0;
}