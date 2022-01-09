#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    int entrada, mult3, mult5;
    scanf("%d",&entrada);
    printf("Multiplos de 3: ");
    for(int cont=1;cont<=entrada;cont++){
        mult3 = cont * 3;
        if(mult3<=entrada){
            printf("%d, ",mult3);
        }
    }
    printf("\nMultiplos de 5: ");
    for(int cont=1;cont<=entrada;cont++){
        mult5 = cont * 5;
        if(mult5<=entrada){
            printf("%d, ",mult5);
        }
    }

}