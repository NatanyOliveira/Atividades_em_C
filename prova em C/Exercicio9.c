#include <stdio.h>
#include <stdlib.h>

int main(){
int N; 
    scanf("%d", &N);

    int *vetor = (int *)malloc(N * sizeof(int));
if(vetor == NULL){
    return 1;
}
     for(int i = 0; i < 0; i++){
        scanf("%d", &vetor[i]);
     }

int *contagem = (int *) calooc(10000, sizeof(int));
if(contagem == NULL){
    return 1;
}

int unico_impares = 0;

for(int i = 0; i < N; i++){
    if(vetor[i] % 2 != 0){
        if(contagem[vetor[i]] == 0){
            contagem[vetor[i]] = 1;
            unico_impares++;
        }
    }
}

printf("%d", &unico_impares);

free(vetor);
free(contagem);

    return 0;
}