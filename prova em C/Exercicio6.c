#include <stdio.h>

 void dobro_dos_negativos(int *vet, int n){
 for(int i = 0; i < n; i++){
    if(*(vet + i) < 0){
        *(vet + i) *= 2;
    }
  }
}

int main() {
int N;
int vetor[100];
     scanf("%d", &N);
for(int i = 0; i < N; i++){
    scanf("%d", vetor[i]);
}

dobro_dos_negativos(vetor, N);

for(int i = 0; i < N; i++){
    scanf("%d", vetor[i]);
}

    return 0;
}