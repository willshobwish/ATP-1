#include<stdio.h>

int main(){
    int entrada, quantidade=0, codigo, quantidade_item, valor_temporario=0, valor_total=0;
    printf("Quantidade de produtos: ");
    scanf("%d",&entrada);
    while (quantidade<entrada){
        printf("Codigo do item %d: ",quantidade+1);
        scanf("%d",&codigo);
        switch(codigo){
            case 100:
                valor_temporario = 10;
                break;
            case 101:
                valor_temporario = 12;
                break;
            case 102:
                valor_temporario = 15;
                break;
            case 103:
                valor_temporario = 11;
                break;
            case 104:
                valor_temporario = 15;
                break;
            case 105:
                valor_temporario = 3;
                break;
        }
        printf("Quantidade do item %d: ",quantidade+1);
        scanf("%d",&quantidade_item);
        valor_temporario = quantidade_item * valor_temporario;
        valor_total = valor_total + valor_temporario;
        printf("Subtotal do item: R$%d,00\n\n",valor_temporario);
        quantidade++;
    }
    printf("Valor total: R$%d,00",valor_total);
}