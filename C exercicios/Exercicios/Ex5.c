#include <stdio.h>

int main(void)
   {
    int v1,v2,v3;

     printf("Entre com o primeiro valor: ");
     scanf("%d",&v1);

     printf("Entre com o segundo valor: ");
     scanf("%d",&v2);

     printf("Entre com o terceiro valor: ");
     scanf("%d",&v3);

    if ((v1 > v2)&&(v1 > v3)){
        printf("O valor %d e o maior numero",v1);
    }
    else if ((v2 > v1)&&(v2 > v3)){
        printf("O valor %d e o maior numero",v2);
    }
    else{
        printf("O valor %d e o maior numero",v3);
    }

return 0;
    }


