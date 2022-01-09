#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float media, frequencia;

    printf("\nDigite a media do aluno: ");
    scanf("%f", &media);
    printf("\nDigite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if(media >= 5 && frequencia >= 70){
        printf("\nAluno aprovado\n");
    }
    else if(media >= 3 && media <= 5 && frequencia >= 70){
        printf("\nAluno está em exame\n");
    }
    else if(media < 3 || frequencia < 70){
        printf("\nAluno reprovado\n");
    }

    return 0;
}
