#include <stdio.h>

int main (void)
{
    int cont[10], idade[10];
    char sexo[10];
    float sal[10];
    int menors_sexo, menors_idade, aux, menor, menors, m, f, pos = 0;
    float salf, salm;
    m = 0;
    f = 0;
    salm = 0;
    salf = 0;
    while (pos < 10)
    {
        while (sexo[pos] != 'M' && sexo[pos] != 'F' && sexo[pos] != 'm' && sexo[pos] != 'f')
        {

            printf("Digite seu sexo (M/F):\n ");
            scanf("%c", &sexo[pos]);
        }
        printf("Digite sua idade:\n ");
        scanf("%d", &idade[pos]);

        printf("Digite seu salario:\n ");
        scanf("%f", &sal[pos]);

        if (sexo[pos] == 'M' || sexo[pos] == 'm')
        {
            m++;
            salm = sal[pos] + salm;
        }
        if (sexo[pos] == 'F' || sexo[pos] == 'f')
        {
            f++;
            salf = sal[pos] + salf;
        }

        menor = idade[0];
        for (aux = 1; aux < 10; aux++)
        {
            if (idade[aux] < menor)
                menor = idade[aux];
        }

        menors = sal[0];
        for (aux = 1; aux < 10; aux++)
        {
            if (sal[aux] < menors)
            {
                menors = sal[aux];
                menors_sexo = sexo[aux];
                menors_idade = idade[aux];
            }
        }
        pos++;
    }

    salm = salm / m;
    salf = salf / f;

    printf("Quantidade de homens: %d \n", m);
    printf("Media do salario do grupo masculino: %.2f \n", salm);



    printf("Quantidade de Mulheres: %d \n", f);
    printf("Media do salario do grupo feminino: %.2f \n", salf);


    printf("Menor idade: %d\n", menor);

    printf("Idade, sexo e salário da pessoa com menor renda: \n");
    printf("Idade = %d \n", menors_idade);
    printf("Sexo = %c \n", menors_sexo);
    printf("Salario = %d \n", menors);
}
