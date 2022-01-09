#include<stdio.h>

int main(){
    float nota_1, nota_2, media;
    int validade = 0;
    printf("Coloque a primeira nota: ");
    scanf("%f",&nota_1);
    printf("Coloque a segunda nota: ");
    scanf("%f",&nota_2);
    if (nota_1>=0){
        if(nota_1<=10){
            printf("A primeira nota eh valida\n");
            validade++;
        }
        else{
        printf("A primeira nota nao eh valida\n");
    }
    }
    else{
        printf("A primeira nota nao eh valida\n");
    }
    if (nota_2>=0){
        if(nota_2<=10){
            printf("A segunda nota eh valida\n");
            validade++;
        }
        else{
        printf("A segunda nota nao eh valida\n");
    }
    }
    else{
        printf("A segunda nota nao eh valida\n");
    }    
    if (validade==2){
        media = (nota_1+nota_2)/2;
        printf("A media eh %f",media);
    }
}