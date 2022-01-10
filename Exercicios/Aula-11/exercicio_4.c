#include<stdio.h>

int main(){
    int idade, tempo_de_servico;
    printf("Coloque a idade: ");
    scanf("%d",&idade);
    printf("Coloque o tempo de servico: ");
    scanf("%d",&tempo_de_servico);
    if((idade>=65)||(tempo_de_servico>=30)||(idade>=60 && tempo_de_servico >= 25){
        printf("Pode se aposentar");
        }
    else{printf("Nao pode se aposentar");
    }
}