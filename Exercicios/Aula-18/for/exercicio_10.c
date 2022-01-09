#include<stdio.h>

int main(){
    int entrada, fatorial;
    scanf("%d",&entrada);
    for(int cont=1; cont<entrada+1; cont++){
        fatorial = cont * fatorial;
    }
    printf("Fatorial: %d",fatorial);
}