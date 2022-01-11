#include<stdio.h>

int main(){
    float nota_1, nota_2, media;
    printf("Coloque a primeira nota: ");
    scanf("%f",&nota_1);
    printf("Coloque a segunda nota: ");
    scanf("%f",&nota_2);
    media = (nota_1+nota_2)/2;
    printf("A media eh: %f\n",media);
    if (media>=5){
        printf("Voce foi aprovado");
    }
    else{
        printf("Voce foi reprovado");
    }

}