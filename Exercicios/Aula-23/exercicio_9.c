#include<stdio.h>

int main(){
    char entrada[200];
    int qntletra=0;
    fgets(entrada,200,stdin);
    for(int cont=0; entrada[cont]!='\0' && entrada[cont]!='\n';cont++){
        qntletra++;
    }
    printf("%d",qntletra);
}