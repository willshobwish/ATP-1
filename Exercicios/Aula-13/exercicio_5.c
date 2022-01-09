#include<stdio.h>
int main(){
    float media_prova, media_trabalho, media_final;
    printf("Coloque a media da prova: ");
    scanf("%f",&media_prova);
    printf("Coloque a media do trabalho: ");
    scanf("%f",&media_trabalho);
    if(media_trabalho > 5 && media_trabalho > 5){
        media_final = (media_trabalho+media_prova)/2;
    }
    else{
        if(media_prova<=media_trabalho){
            media_final = media_prova;
        }
        else if(media_trabalho<=media_prova){
            media_final = media_trabalho;
        }
    }
    printf("Sua media final eh %f", media_final);
}