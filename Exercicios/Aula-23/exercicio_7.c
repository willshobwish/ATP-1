#include<stdio.h>

int main(){
    char l1, l2, entrada[200];
    scanf("%c",&l1);
    fflush(stdin);
    scanf("%c",&l2);
    fflush(stdin);
    fgets(entrada,200,stdin);
    for(int cont=0; entrada[cont]!='\0' && entrada[cont]!='\n';cont++){
        if(l1 == entrada[cont]){
            entrada[cont] = l2;
        }
    }
    printf("%s",entrada);
}