#include <stdio.h>
int num_negativos(int (*mat)[4], int linhas){
    int negativos;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 4; j ++){
            if(*(*(mat + i) + j) < 0){
                negativos++;
            }
        }
    }

    return negativos;
}


int main(){
int matriz[4][4];

for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++) {
        scanf("%d", matriz[i][j]);
    }
}

int qtd_negativos = num_negativos(matriz, 4);

printf("%d", qtd_negativos);

    return 0;
}