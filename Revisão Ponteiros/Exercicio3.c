#include <stdio.h>

void trocar_negativos(int *vet, int n){
    for(int i = 0; i < n; i++){
        if(*(vet + i) < 0){
            *(vet + i) = 0;
        }
    }
}


int main() {
int N;
int vetor[100];

scanf("%d", &N);
for(int i = 0; i < N; i++){
    scanf("%d", &vetor[i]);
}

trocar_negativos(vetor, N);

for(int i = 0; i < N; i++){
    printf("%d", vetor[i]);
}

printf("\n");

    return 0;
}