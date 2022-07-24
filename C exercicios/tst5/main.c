#include <stdio.h>

int main(void)
{
    char nomes[4][20];
    int cont, pos, aux, r;
    cont = 0;
    aux = 0;
    r = 0;
    while(cont < 4){
    printf("Digite 4 nomes que contenham r: ");
    scanf("%s", &nomes[cont]);

    cont++;
    }
    for (pos = 0; pos < 4; pos++){
        for (aux = 0; aux < 20; aux++){
            if (nomes[pos][aux] == 114){
               r++;
            }
        }
    }
    printf("Quantidade de r: %d ", r);
}
