#include <stdio.h>
#include <stdlib.h>


int main (){
int N;
     scanf("%d", &N);
int *vetor = (int *) malloc(N * sizeof(int));
if(vetor == NULL){
    return 1;
}
     for(int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

int *contagem = (int *) calloc(10000, sizeof(int));
if(contagem == NULL){
    return 1;
}

for(int i = 0; i < N; i++){
    contagem[vetor[i]]++;
}

int repetidos = 0;

for(int i = 0; i < N; i++){
    if(contagem[i] > 1){
        repetidos++;
    }
}

printf("%d", repetidos);

free(vetor);
free(contagem);

    return 0;
}