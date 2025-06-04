#include <stdio.h>

int main() {
int vet[10];
int *pares = vet;
int soma = 0;

for(int i = 0; i < 10; i++){
    scanf("%d", &vet[i]);
}

for(int i = 0; i < 10; i++){
    if(*pares % 2 == 0){
        soma += *pares;
    }
    pares++;
}

printf("Soma dos pares = %d\n", soma);
   
  return 0;
}