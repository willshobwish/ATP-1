#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float media_trabalho, media_provas, media_final;

    printf("\nDigite a media de trabalhos do aluno: ");
    scanf("%f", &media_trabalho);
    printf("\nDigite a media de provas: ");
    scanf("%f", &media_provas);

    if(media_trabalho >= 5 && media_provas >= 5){
        media_final = (media_trabalho + media_provas)/2;
    }
    else{
        if(media_provas < media_trabalho){
            media_final = media_provas;
        }
        else{
            media_final = media_trabalho;
        }
    }
    printf("\nMedia final do aluno: %f\n", media_final);

    return 0;
}
