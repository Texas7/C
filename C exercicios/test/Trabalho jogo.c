#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int num, sorteio, min, max;
    min = 0;
    max = 100;

    srand(time(NULL));
    sorteio = rand()% 100;

    while (num != sorteio){

            printf("Digite um numero entre %d e %d: ", min, max);
            scanf("%d", &num);

                    if (num < sorteio){
                        min = num;
                    }
                    if (num > sorteio){
                        max = num;
                    }
                    if (num == sorteio){
                        printf("\nParebens, voce acertou.\n");
                    }

    }
}
