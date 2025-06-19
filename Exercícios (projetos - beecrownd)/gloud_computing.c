#include <stdio.h>
#include <string.h>

#define MAX_APLICACOES 10000
#define MAX_SERVIDORES 201
#define MAX_CLIENTES 201

int id_aplicacao = 0;
char aplicacoes[MAX_APLICACOES][31];

 
int obter_id_aplicacao(char* nome) {
    for (int i = 0; i < id_aplicacao; i++) {
        if (strcmp(aplicacoes[i], nome) == 0) {
            return i;
        }
    }
    strcpy(aplicacoes[id_aplicacao], nome);
    return id_aplicacao++;
}

int servidor[MAX_SERVIDORES][MAX_APLICACOES];  
int cliente[MAX_CLIENTES][MAX_APLICACOES];     
int main() {
    int N, M;

    while (scanf("%d %d", &N, &M), N || M) {
        id_aplicacao = 0;
        memset(servidor, 0, sizeof(servidor));
        memset(cliente, 0, sizeof(cliente));

 
        for (int i = 0; i < N; i++) {
            int qtd;
            scanf("%d", &qtd);
            for (int j = 0; j < qtd; j++) {
                char nome[31];
                scanf("%s", nome);
                int id = obter_id_aplicacao(nome);
                servidor[i][id] = 1;
            }
        }

 
        for (int i = 0; i < M; i++) {
            int qtd;
            scanf("%d", &qtd);
            for (int j = 0; j < qtd; j++) {
                char nome[31];
                scanf("%s", nome);
                int id = obter_id_aplicacao(nome);
                cliente[i][id] = 1;
            }
        }

     
        int conexoes = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < id_aplicacao; k++) {
                    if (cliente[i][k] && servidor[j][k]) {
                        conexoes++;
                        break;
                    }
                }
            }
        }

        printf("%d\n", conexoes);
    }

    return 0;
}
