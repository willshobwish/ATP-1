#include<stdio.h>
#include<math.h>

int main(){
    double x1, x2, delta, coef_1, coef_2, coef_3;
    printf("Coloque os coeficientes a, b e c: ");
    scanf("%lf%lf%lf",&coef_1, &coef_2, &coef_3);
    delta = (pow(coef_2, 2)-4*coef_1*coef_3);
    printf("Delta = %f\n",delta);
    if(delta>0){
        x1 = ((-coef_2+sqrt(delta))/2*coef_1);
        x2 = ((-coef_2-sqrt(delta))/2*coef_1);
        printf("As raizes sao: %f e %f", x1, x2);
    }
    else if(delta == 0){
        x1 = ((-coef_2+sqrt(delta))/2*coef_1);
        printf("Existe somente uma raiz: %f",x1);
    }
    else if(delta<0){
        printf("Nao existem raizes reais");
    }
}