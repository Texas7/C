#include <stdio.h>
int main (void)
{
    int v1;

    printf("Digite um numero: ");
    scanf("%d",&v1);

    if (v1%2 == 0){
        printf("O numero %d e par",v1);
    }
    else{
        printf("O numero %d e impar",v1);
    }
    if (v1 >= 0){
        printf(" e positivo\n",v1);
    }
    else{
        printf(" e negativo\n",v1);
    }

 return 0;
}
