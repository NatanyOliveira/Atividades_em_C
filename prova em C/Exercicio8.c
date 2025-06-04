#include <stdio.h>
#include <stdlib.h>

int main(){

int N;
int *vetor = (int *)malloc(N * sizeof(int));


scanf("%d", &N);
for(int i = 0; i < N; i++){
    scanf("%d", vetor[i]);
}

int *contagem = (int *) calloc(100000, sizeof(int));

int repetidos = 0;
for(int i = 0; i < N; i++) {
    contagem[*(vetor + i)]++;
    if(contagem[*vetor + i] == 2){
        repetidos++;
    }
}

printf("%d\n", repetidos);

free(vetor);
free(contagem);
    return 0;
}