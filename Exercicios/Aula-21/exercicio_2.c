#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    double entrada;
    while(entrada>0 && entrada!=0){
        printf("Coloque um numero: ");
        scanf("%lf",&entrada);
        if(entrada>0 && entrada!=0){
        printf("Quadrado: %f\n",pow(entrada,2));
        printf("Cubo: %f\n",pow(entrada,3));
        printf("Raiz quadrada: %f\n\n",sqrt(entrada));
        }
    }
}