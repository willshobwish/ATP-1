#include<stdio.h>
#include<stdbool.h>

int main(){
    char entrada[200], entrada2[100];
    bool estado = 1;
    fgets(entrada,200,stdin);
    fgets(entrada2,200,stdin);
    for(int cont=0; entrada[cont]!='\0' && entrada[cont]!='\n';cont++){
        if(entrada[cont] != entrada2[cont]){
            estado = 0;
        }
    }
    if(estado == 1){
        printf("Strings iguais");
    }
    else{
        printf("Strings diferentes");
    }
}