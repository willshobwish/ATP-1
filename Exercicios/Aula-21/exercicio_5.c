#include<stdio.h>

int main(){
    int entrada, primo = 0;
    scanf("%d",&entrada);
    for(int cont=1;cont<=entrada;cont++){
        if(cont!=1 && cont<entrada){
            if(entrada%cont==0){
                printf("Divisivel por %d\n",cont);
                primo = 1;
            }
        }
    }
    if(primo==0){
        printf("Numero %d eh primo",entrada);
    }
    else{
        printf("Numero %d nao eh primo",entrada);
    }
}