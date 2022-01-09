#include<stdio.h>
#include<math.h>

int main(){
    double angulo, angulo_radiano, seno, cosseno;
    printf("Coloque os angulos em graus para conversao em seno e cosseno: ");
    scanf("%lf",&angulo);
    angulo_radiano=angulo*(3.1415926535897932384626433832795/180);
    seno = sin(angulo_radiano);
    cosseno = cos(angulo_radiano);
    printf("Seno: %f\nCosseno: %f\n",seno, cosseno);
}