#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void le_arquivo(char *nome, int mat[][9]){
    FILE *arq = fopen(nome,"r");
    if(arq == NULL){
        printf("Erro de leitura\n");
        system("pause");
        exit(1);
    }

    int i,j;
    for(i=0; i< 9; i++)
        for(j=0; j< 9; j++)
            fscanf(arq,"%d",&mat[i][j]);

    fclose(arq);
}
int main(){
    int mat[9][9];
    le_arquivo("sudoku.txt", mat);


    int i,j;
    for(i=0; i< 9; i++){
        for(j=0; j< 9; j++)
            printf("%d ",mat[i][j]);

        printf("\n");
    }

    return 0;
}