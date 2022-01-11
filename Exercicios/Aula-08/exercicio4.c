#include<stdio.h>

int main(){
    int dividendo, divisor, quociente, resto;
    printf("Digite o divisor: ");
    scanf("%d",&dividendo);
    printf("Digite o divisor: ");
    scanf("%d",&divisor);
    quociente = dividendo/divisor;
    resto = dividendo%divisor;
    printf("Quociente: %d\n",quociente);
    printf("Resto: %d",resto);
    return 0;
}