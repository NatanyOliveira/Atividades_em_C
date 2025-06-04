#include <stdio.h>
#include <stdlib.h>


int main (){
int N;
     scanf("%d", &N);

int *vetor = (int *) malloc(N * sizeof(int));
if(vetor == NULL){
    return 1;
}

int soma = 0;
for(int i = 0; i < N; i++){
     scanf("%d", &vetor[i]);
     soma += vetor[i];
}

float media = (float)soma / N;

int maiores = 0;
for(int i = 0; i < N; i++){
    if(vetor[i] > media) {
        maiores++;
    }
}

printf("%d", maiores);

free(vetor);
    return 0;
}