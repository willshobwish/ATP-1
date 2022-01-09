#include <stdio.h>
#include <limits.h>

int main()
{
    int entrada = 1, npar = 0, nimpar = 0;
    printf("Coloque numeros inteiros: ");
    while (entrada != 0)
    {
        scanf("%d", &entrada);
        if (entrada != 0)
        {
            if (entrada % 2 == 0)
            {
                npar++;
            }
            else
            {
                nimpar++;
            }
        }
    }
    printf("Numeros pares: %d\nNumeros impares: %d", npar, nimpar);
}
