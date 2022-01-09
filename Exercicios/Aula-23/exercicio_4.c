#include<stdio.h>

int main(){
    char entrada[200];
    fgets(entrada,200,stdin);
    for (int cont=0;entrada[cont]!='\0';cont++){
        if (entrada[cont] == '0'){
            entrada[cont] = '1';
        }
    }
    printf("%s",entrada);
}