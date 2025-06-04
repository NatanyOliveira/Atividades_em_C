#include <stdio.h>

int soma_diagonal(int *(mat)[3], int linhas){
    int soma = 0;
    for(int i = 0; i < linhas; i++){
        soma += *(*(mat + i) + (2 - i));
    }
    return soma;
}

int main(){
int matriz[3][3];


for(int i = 0; i < 3; i++){
    for(int j = 2 - i; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }
}

int rsultado = soma_diagonal(matriz, 3);

    return 0;
}