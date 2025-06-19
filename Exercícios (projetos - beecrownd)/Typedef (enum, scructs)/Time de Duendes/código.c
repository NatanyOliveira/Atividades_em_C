/*
Este programa gerencia uma lista de duendes com nome e idade, 
organizando-os em times de três integrantes: líder, entregador e piloto.

Funcionamento geral:

1. O programa lê um número N, que representa a quantidade total de duendes.
2. Para cada duende, lê o nome e a idade.
3. Ordena os duendes por idade decrescente; em caso de empate, ordena alfabeticamente pelo nome.
4. Divide os duendes ordenados em grupos de três (N deve ser múltiplo de 3):
   - Os primeiros N/3 duendes são líderes.
   - Os próximos N/3 são entregadores.
   - Os últimos N/3 são pilotos.
5. Cria um vetor de times, cada um composto por um líder, um entregador e um piloto.
6. Imprime os times com os nomes e idades de seus integrantes.

A ordenação é feita por seleção, priorizando idade e, em caso de empate, ordem alfabética.
Os times são formados "verticalmente" com os duendes ordenados: cada time recebe um duende de cada "terço" da lista ordenada.
*/

#include <stdio.h>
#include <string.h>

#define max_d 30

typedef struct {
    char nome[20];
    int idade;
} D;

typedef struct {
    D *lider;
    D *entregador;
    D *piloto;
} time;

void ordem_velhos(D duendes[], int n){
    for(int i = 0; i < n - 1; i++){
        int maior  = i;  
        for(int j = i + 1; j < n; j++){  
            if(duendes[j].idade > duendes[maior].idade){  
                maior = j;  
            }else if(duendes[j].idade == duendes[maior].idade && strcmp(duendes[j].nome, duendes[maior].nome) < 0){
                maior = j;  
        }
    }
    if (maior != i) {
        D cont = duendes[i];
        duendes[i] = duendes[maior];
        duendes[maior] = cont;
        }
    }
}

int main() {
int N;
D duendes[max_d];

scanf("%d", &N);

for(int i = 0; i < N; i++){
    scanf("%s %d", duendes[i].nome, &duendes[i].idade);
}

ordem_velhos(duendes, N);

int t = N/3;
time times[t];
 
   for (int i = 0; i < t; i++){  
       times[i].lider = &duendes[i];
       times[i].entregador = &duendes[i + t];
       times[i].piloto = &duendes[i + 2 * t];
   }
   
   for (int i = 0; i < t; i++){
       printf("Time %d\n", i + 1);
       printf("%s %d\n", times[i].lider->nome, times[i].lider->idade);
       printf("%s %d\n", times[i].entregador->nome, times[i].entregador->idade);
       printf("%s %d\n", times[i].piloto->nome, times[i].piloto ->idade);
       printf("\n"); 
       }
   
    return 0;
}
