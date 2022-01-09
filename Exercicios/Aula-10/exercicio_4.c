#include<stdio.h>

int main(){
    float salario, porcentagem, emprestimo;
    printf("Digite o seu salario para o emprestimo: ");
    scanf("%f",&salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%f",&emprestimo);
    porcentagem=emprestimo/salario;
    if(emprestimo>salario*0.2){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
}