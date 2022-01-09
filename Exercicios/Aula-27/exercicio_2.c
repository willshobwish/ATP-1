#include<stdio.h>
#include<stdbool.h>

int tabuada(int numero_1){
    for(int a=1;a<=10;a++){
        printf("%d * %d = %d\n",a,numero_1,a*numero_1);
    }
}

int main(void){
    int entrada_1;
    scanf("%d",&entrada_1);
    tabuada(entrada_1);
}