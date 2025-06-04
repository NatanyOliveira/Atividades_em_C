#include <stdio.h>

void substituir_por_zero(int (*mat)[3], int linhas, int colunas){

for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if  (*(*(mat + i) + j) < 0){
        *(*(mat +i) + j) = 0;
      }
    }
  }
}
int main(){
int matriz[3][3];

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }
}

substituir_por_zero(matriz, 3, 3);

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }

   printf("\n");

}

 
    return 0;
}