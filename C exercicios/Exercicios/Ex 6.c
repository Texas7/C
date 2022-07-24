#include <stdio.h>

int main (void)

{   int n1,n2;

    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);

    printf("Digite o segundo valor: ");
    scanf("%d",&n2);

    if (n1/n2 % 0){
        printf("O numero %d e multiplo de &d",n1,n2);
    }
    else if (n2/n1 % 0){
        printf("O numero %d e multiplo de &d",n2,n1);
    }
    else{
        printf("nenhum numero e multiplo um do outro");
    }

   return 0;
}

