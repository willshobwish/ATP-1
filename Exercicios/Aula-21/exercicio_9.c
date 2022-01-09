#include<stdio.h>

int main(){
    int entrada, numero=1;
    scanf("%d",&entrada);
    for(int cont=1; cont<=entrada; cont++){
        for(int cont2=1; cont2<=cont;cont2++){
            printf("%d ",numero);
            numero++;
        }
        printf("\n");
    }
}