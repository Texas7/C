#include <stdio.h>

int main(void)
{
    char nomes[4][20];
    int cont, r, aux, pos;
    cont = 0;
    aux = 0;
    while (cont < 4)
    {
        printf("Digite quatro nomes: ");
        scanf("%s", &nomes[cont]);
        cont++;
    }

    for (pos = 0; pos < 4; pos++)
    {
        for (aux = 0; aux < 20; aux++)
        {
            if (nomes[pos][aux] == 114){
                r++;
            }
        }
    }
    r = r -16;
    printf("existem %d\n", r);
}
