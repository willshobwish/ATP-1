#include<stdio.h>
#include<stdbool.h>

int main(){
    char entrada[200], entrada2[100];
    int letras=0, comunista=0;
    fgets(entrada,200,stdin);
    fgets(entrada2,200,stdin);
    for(int qnt=0;entrada[qnt]!='\0'&&entrada[qnt]!='\n';qnt++){
        letras++;
    }
}