#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define NLIN 9
#define NCOL 9

int IsAvailible(int puzzle[][9], int row, int col, int num){
    int row_start = (row/3) * 3;
    int col_start = (col/3) * 3;
    int i;
    for (i = 0; i < 9; ++i){
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[row_start + (i%3)][col_start + (i/3)] == num) return 0;
    }
    return 1;
}

int Fillpuzzle(int puzzle[][9], int row, int col){
    int i;
    if (row < 9 && row < 9){
        if (puzzle[row][col] != 0){
            if ((col + 1) < 9) return Fillpuzzle(puzzle, row, col + 1);
            else if ((row + 1) < 9) return Fillpuzzle(puzzle, row + 1, 0);
            else return 1;
        } else {
            for (i = 0; i < 9; ++i){
                if (IsAvailible(puzzle, row, col, i + 1)){
                    puzzle[row][col] = i + 1;
                    if ((col + 1) < 9) {
                        if (Fillpuzzle(puzzle, row, col + 1)) return 1;
                        else puzzle[row][col] = 0;
                    } else if ((row + 1) < 9){
                        if (Fillpuzzle(puzzle, row + 1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    } else {
                        return 1;
                    }
                }
            }
            return 0;
        }
    } else {
        return 1;
    }
}


void readmatrix(FILE *file, char out[NLIN][NCOL]){
    int c;
    for(int i=0; i<NLIN; i++){
        for(int j=0; j<NCOL;){
            c = fgetc(file);
            if(c == 32) continue;
            out[i][j] = c;
            j++;
        }
        c = fgetc(file);
    }
}

int main(){
    int i, j;
    FILE *entrada = fopen("sudoku.txt", "r");

    char puzzle[NLIN][NCOL];
    readmatrix(entrada, puzzle);


    for(int i = 0; i < NLIN; i ++){
       printf("\n+-----+-----+-----+\n");
        for (i = 1; i < 10; ++i){
            for (j = 1; j < 10; ++j) printf(" %c", puzzle[i - 1][j - 1]);
                printf("\n");
                if (i % 3 == 0) printf("+-----+-----+-----+\n");
        }
    }
/*
    Integrantes:

    Lucas Collenghe Gomes - 12111ecv038
    Arthur Fernandes Boaventura Pimenta - 12111ECV030
*/


    fclose(entrada);
    return 0;
}
