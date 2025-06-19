#include <stdio.h>
#include <stdlib.h>

int compara_c(const void *a, const void *b){
    int valorA = *(const int *)a;
    int valorB = *(const int *)b;
    return valorA - valorB;
}

int compara_d(const void *a, const void *b){
    int valorA = *(const int *)a;
    int valorB = *(const int *)b;
    return valorB - valorA;
}

int main() {
    int N;
    scanf("%d", &N);
  
    int numeros[100000];
    int pares[100000], impares[100000];
    int qtd_pares = 0, qtd_impares = 0;
  
    int *ptr = numeros;   

    for (int i = 0; i < N; i++){
        scanf("%d", ptr + i);
      
        if (*(ptr + i) % 2 == 0){
            *(pares + qtd_pares) = *(ptr + i);
            qtd_pares++;
        }
        else {  
            *(impares + qtd_impares) = *(ptr + i);
            qtd_impares++;
        }
    }
  
    qsort(pares, qtd_pares, sizeof(int), compara_c);
    qsort(impares, qtd_impares, sizeof(int), compara_d);   
  
    int *p;
  
    for (p = pares; p < pares + qtd_pares; p++){
        printf("%d\n", *p);
    }
    for (p = impares; p < impares + qtd_impares; p++){
        printf("%d\n", *p);
    }
 
    return 0;
}
 
