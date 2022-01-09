#include<stdio.h>

int main(){
    int entrada, a=1, b=0, c;
    scanf("%d",&entrada);
    for(int cont=0;cont<entrada;cont++){
        printf("Soma: %d\n",a);
        c = a + b;
        b = a;
        a = c;
    }
}