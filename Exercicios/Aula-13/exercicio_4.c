#include<stdio.h>
int main(){
    int frequencia;
    float media;
    printf("Coloque a frequencia: ");
    scanf("%d",&frequencia);
    printf("Coloque a media: ");
    scanf("%f",&media);
    if(media>5 && frequencia >=70){
        printf("Aprovado");
    }
    else if(media>3 && media<5 && frequencia >= 70){
        printf("Exame");
    }
    else if(media<3 || frequencia<70){
        printf("Reprovado");
    }
    else{
        printf("Entradas erradas");
    }
}