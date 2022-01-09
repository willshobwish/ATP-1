#include<stdio.h>

int main(){
    for(int i=0; i<11;i++){
        printf("%d: ",i);
        for(int j=1; j<11;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
}