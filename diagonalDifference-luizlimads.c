#include <stdio.h>
#include <math.h>
// https://www.hackerrank.com/challenges/diagonal-difference
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int soma_diagonal_principal = 0,
        soma_diagonal_secundaria = 0;
    for(int linha=0; linha<arr_rows; linha++){
        for(int coluna=0; coluna<arr_columns; coluna++){
            if(linha == coluna) 
                soma_diagonal_principal += arr[linha][coluna];
            if(linha+coluna+1==arr_columns)
                soma_diagonal_secundaria += arr[linha][coluna];
        }
    }
    return (int) abs(soma_diagonal_principal-soma_diagonal_secundaria);
}

int main(){
    
    printf("Executei");

    return 0;
}
