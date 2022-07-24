#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main (void)
{
    int cont, num = 0;
    float fun1[num], fun2[num],S,d;
    cont = 1;
    d = 3;
    S = 0;

    printf("Digite um numero: ");
    scanf("%d",&num);

    fun1[num];
    fun2[num];

    while(cont<=num)
    {
        fun2[cont] = pow(d,3);

        if (cont = 1) {
            fun1[cont] = fun2[cont] - 1;
            S = fun1[cont]/fun2[cont];
        }
        else{
            fun1[cont] = fun2[cont];
            if (cont%2==0){
                    fun1[cont] = (fun1[cont] * fun1[cont - 1])+ fun2[cont - 1];
                    }
                else{
                    fun1[cont] = (fun1[cont] * fun1[cont - 1])- fun2[cont - 1];
                    }
                S = fun1[cont]/fun2[cont];
            }

        d += 2;

        cont ++;
    }
    printf("%f", S);
    return 0 ;
}
