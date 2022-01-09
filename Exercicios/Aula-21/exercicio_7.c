#include<stdio.h>

int main(){
    int entrada;
    float fatorial, denominador, soma;
    scanf("%d",&entrada);
    for(int cont=1;cont<=entrada;cont++){
        for(int cont2=1;cont2<=cont;cont2++){
            fatorial = cont2 * fatorial;
            soma = ((1/fatorial) + soma);
        }
    }
    printf("%f\n",soma);
    printf("%f\n",fatorial);
}