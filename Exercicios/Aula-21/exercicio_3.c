#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    int entrada = 0;
    float numero_1, numero_2;
    while(entrada != 5){
        printf("\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n");
        scanf("%d",&entrada);
        switch(entrada){
        case 1:
            printf("Coloque dois numeros para somar: \n");
            scanf("%f%f",&numero_1,&numero_2);
            printf("A soma dos numeros: %f\n",numero_1+numero_2);
            break;

        case 2:
            printf("Coloque dois numeros para subtrair: \n");
            scanf("%f%f",&numero_1,&numero_2);
            printf("A subtracao dos numeros: %f\n",numero_1-numero_2);
            break;

        case 3:
            printf("Coloque dois numeros para multiplicacao: \n");
            scanf("%f%f",&numero_1,&numero_2);
            printf("A multiplicacao dos numeros: %f\n",numero_1*numero_2);
            break;   
        
        case 4:
            printf("Coloque dois numeros para dividir: \n");
            scanf("%f%f",&numero_1,&numero_2);
            if(numero_2!=0){
                printf("A divisao dos numeros: %f\n",numero_1/numero_2);
            }
            else{
                printf("Nao eh possivel dividir por zero\n");
            }
        break;

        default:
            break;
        }
    }
}