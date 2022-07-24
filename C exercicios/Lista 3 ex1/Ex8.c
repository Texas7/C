#include <stdio.h>

int main (void)
{
    int x;
    char y[20];

    printf("Digite um nome sem acento: ");
    gets(y);

    for (x = 0; x < 12; x++){
        if (y[x] > 64 && y[x] < 123){
            y [x] = y[x] - 32;
        }
    }
    printf("%s", y);
}

