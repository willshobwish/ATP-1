#include<stdio.h>
#include<limits.h>

int main(){
    int entrada = 0, menor = INT_MAX, maior = INT_MIN;
    scanf("%d",&entrada);
    if(entrada>=0){
        while(entrada>=0){
        scanf("%d",&entrada);
        if(entrada>maior){
            maior = entrada;
        }
        if(entrada<menor && entrada>0){
            menor = entrada;
            }
        }
    }
    printf("O maior numero foi: %d\nO menor numero foi: %d\n",maior,menor);
}