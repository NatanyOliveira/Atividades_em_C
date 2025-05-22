#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define apli 100      
#define nome 21      
#define serv 201     
#define cliente 201   

int main() {
    int N, M;

    while (1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0)
            break;

       
        char *servidores[serv][apli];
        int qtd_servidor[serv];

        for (int i = 0; i < N; i++) {
            scanf("%d", &qtd_servidor[i]);
            for (int j = 0; j < qtd_servidor[i]; j++) {
                servidores[i][j] = (char *)malloc(nome * sizeof(char));
                scanf("%s", servidores[i][j]);
            }
        }

        
        char *clientes[cliente][apli];
        int qtd_cliente[cliente];

        for (int i = 0; i < M; i++) {
            scanf("%d", &qtd_cliente[i]);
            for (int j = 0; j < qtd_cliente[i]; j++) {
                clientes[i][j] = (char *)malloc(nome * sizeof(char));
                scanf("%s", clientes[i][j]);
            }
        }

       
        int conexao[cliente][serv] = {0};
        int total = 0;

        
        for (int c = 0; c < M; c++) {
            for (int s = 0; s < N; s++) {
                for (int app_c = 0; app_c < qtd_cliente[c]; app_c++) {
                    for (int app_s = 0; app_s < qtd_servidor[s]; app_s++) {
                        if (strcmp(clientes[c][app_c], servidores[s][app_s]) == 0) {
                            if (!conexao[c][s]) {
                                conexao[c][s] = 1;
                                total++;
                            }
                        }
                    }
                }
            }
        }

        printf("%d\n", total);

      
        for (int i = 0; i < N; i++)
            for (int j = 0; j < qtd_servidor[i]; j++)
                free(servidores[i][j]);

        for (int i = 0; i < M; i++)
            for (int j = 0; j < qtd_cliente[i]; j++)
                free(clientes[i][j]);
    }

    return 0;
}
