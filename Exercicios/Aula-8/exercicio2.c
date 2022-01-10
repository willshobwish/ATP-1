#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float comprimento, largura, perimetro, cerca;
    printf("Coloque o comprimento do terreno: ");
    scanf("%f",&comprimento);
    printf("coloque a largura do terreno: ");
    scanf("%f",&largura);
    perimetro = (comprimento*2)+(largura*2);
    printf("Coloque o preco da cerca: ");
    scanf("%f",&cerca);
    cerca = perimetro*cerca;
    printf("O custo para cercar o terreno: R$%.2f",cerca);
    return 0;
}
