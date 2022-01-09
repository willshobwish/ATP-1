#include<stdio.h>
//Faça um programa para ler um valor inteiro em segundos e imprimir o correspondente em horas, minutos e segundos.
int main(){
    int horas, minutos, segundos, segundo_resposta, auxiliar;
    printf("Segundos para converter: ");
    scanf("%d",&segundo_resposta);
    
    horas=segundo_resposta/3600;
    auxiliar=segundo_resposta - (horas*3600);
    minutos=auxiliar/60;
    segundos=auxiliar-(minutos*60);


    printf("%d segundos corresponde a %d horas, %d minutos, %d segundos\n",segundo_resposta,horas,minutos,segundos);
    return 0;
}