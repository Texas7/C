#include <stdio.h>

int main (void){

    char palavras[50];
    int aux, quantidade, tamanho, quantidade_p;

    quantidade = 0;
    tamanho = 3;

    printf("Digite as palavras: ");
    fgets(palavras, 50, stdin);

    for (aux = 0; aux < 50; aux++){
        if (palavras[aux] > 'A' && palavras[aux] < 'z'){
            quantidade++;
        }
        if (palavras[aux] == 32){
            if (quantidade >= tamanho){
                quantidade_p++;
            }
        }
    }

    if (quantidade >= tamanho){
        quantidade_p++;
    }

    printf("%d", quantidade_p);
}
