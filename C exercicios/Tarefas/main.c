#include <stdio.h>
#include <conio.h>

int main(void)
    {   float total, n1, n2, aux;
        char ficaousai='N';

        while (ficaousai == 'N' || ficaousai == 'n'){
            printf("\n\nDigite um numero: ");
            scanf("%f",&n1);
            printf("Digite outro numero maior que o anterior: ");
            scanf("%f",&n2);

            if (n1>n2){
                aux=n1;
                n1=n2;
                n2=aux;
            }
            while (n1<n2){
                total+=n1;
                n1++;
            }
            printf("\n \nA soma dos numeros resulta em: %.2f",total);
            printf("\n \nDigite 'S' para sair ou 'N' para continuar.");
            ficaousai=getch();
        }

    }
