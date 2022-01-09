#include<stdio.h>

int main(){
    char entrada[200];
    int nvogal=0, vogal=0;
    fgets(entrada,200,stdin);
    for (int cont=0;entrada[cont]!='\0' && entrada[cont]!= '\n';cont++){
        switch (entrada[cont]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vogal++;
            break;
        default:
            nvogal++;
            break;
        }
    }
    printf("Vogal: %d\nConsoante: %d\n",vogal,nvogal);
}