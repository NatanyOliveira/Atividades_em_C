#include <stdio.h>

int main(){

int matriz[3][3];
int soma = 0;
float media;

for(int i = 0; i < 3; i++){
   for(int j = 0; j < 3; j++){
    scanf("%d", &matriz[i][j]);
   }
}

for(int i = 0; i < 3; i++){
    soma += *(*(matriz + i) + i);
}

media = soma / 3.0;

printf("Média da diagonal principal = %.2f\n", media);

    return 0;
}