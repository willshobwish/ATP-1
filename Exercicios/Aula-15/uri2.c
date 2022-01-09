#include<stdio.h>
#include<math.h>

int main(){
    double area, pi, circulo;
    pi = 3.14159;
    scanf("%lf",&circulo);
    area = pi * pow(circulo, 2);
    printf("A=%.4f\n",area);
    return 0;
}