#include<stdio.h>

int quadrado(int entrada){
    //o ideal eh nao possuir entrada de dados, pode ter saida de dados. deixar generico.
    int resultado = entrada * entrada;
    return resultado;
}

float calculo_media(float n1, float n2){
    float media = (n1+n2)/2;
    return media;
}

int main(void){
    float nota_1 = 0, nota_2 = 0;
    scanf("%f%f",&nota_1, &nota_2);
    printf("%f", calculo_media(nota_1, nota_2));
    return 0;
}