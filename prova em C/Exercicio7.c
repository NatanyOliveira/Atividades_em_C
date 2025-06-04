#include <stdio.h>
int multiplos_de_tres(int *vet, int n){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if (*(vet + i) % 3 == 0){
            cont++;
        }
    }
    return cont;
}

int main(){
int N;
int vetor[100];
     scanf("%d", &N);
for(int i = 0; i < N; i++){
    scanf("%d", &vetor[i]);
}

int multiplos =  multiplos_de_tres(vetor, N);

return 0;
}