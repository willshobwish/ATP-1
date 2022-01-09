#include<stdio.h>
#include<string.h>
#define T 300

int main(){
    char nome_1[T]="willian", nome_2[T]="yoshio";
    //Para declarar strings utiliza-se char nome_variavel[string_size]
    //char n = 'a'; utilizado para declarar somente um byte 
    printf("%s",nome_1);
    //%c para character e %s para string
    //Apos utilizar scanf("%c",&variavel); precisa utilizar o fflush(stdin) ou setbuf(stdin, NULL); pois fará a leitura do enter
    //no fim da string é inserido "\0" para indicar o final, tambem é inserido quando há space ou enter é encontrado
    gets(nome_1);
    //gets() pode ultrapassar os limites da área de memoria alocada
    //fgets(string_variable, amount, origin);
    //fgets(string, 10, stdin);
}