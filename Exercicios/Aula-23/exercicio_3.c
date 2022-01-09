#include<stdio.h>

int main(){
    char entrada[200];
    int a=0, e=0, i=0, o=0, u=0;
    fgets(entrada,200,stdin);
    for(int cont=0;entrada[cont];cont++){
        switch(entrada[cont])
        {
        case 'a':
            a++;
            break;
        
        case 'e':
            e++;
            break;

        case 'i':
            i++;
            break;

        case 'o':
            o++;
            break;

        case 'u':
            u++;
            break;
        }
    }
    printf("Quantidade de vogais\na=%d\ne=%d\ni=%d\no=%d\nu=%d\n",a,e,i,o,u);
}