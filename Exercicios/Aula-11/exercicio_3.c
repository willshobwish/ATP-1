#include<stdio.h>

int main(){
    int lado_a, lado_b, lado_c;
    // printf("Coloque os lados do triangulo: ");
    printf("Coloque o lado a do triangulo: ");
    // scanf("%d%d%d",&lado_a, &lado_b, &lado_c);
    scanf("%d",&lado_a);
    printf("Coloque o lado b do triangulo: ");
    scanf("%d",&lado_b);
    printf("Coloque o lado c do triangulo: ");
    scanf("%d",&lado_c);
    if(lado_a==lado_b && lado_b==lado_c){
        printf("Eh triangulo equilatero");
    }
    else if(lado_a == lado_b || lado_b==lado_c || lado_a == lado_c){
        printf("Eh um triangulo isosceles");
    }
    else{
        printf("Eh um triangulo escaleno");
    }
}