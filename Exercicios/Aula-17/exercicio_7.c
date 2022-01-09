#include <stdio.h>

int main(){
    int quantidade = 1, quantidade_fatorial = 0, fatorial = 1;
    printf("Coloque o fatorial: ");
    scanf("%d",&quantidade_fatorial);
    while(quantidade<quantidade_fatorial){
        quantidade++;
        fatorial = quantidade * fatorial;
    }
    printf("%d",fatorial);
}
