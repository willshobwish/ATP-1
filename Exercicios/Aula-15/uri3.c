#include <stdio.h>
#include <math.h>

int main() {

    float raio, area, quadrado;
    scanf("%f", &raio);
    quadrado = pow(raio, 2);
    area = 3.14159 * quadrado;
    printf("A=%.4f\n", area);
    return 0;
}