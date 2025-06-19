#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int N, B;

    while (1) {
        scanf("%d %d", &N, &B);
        if (N == 0 && B == 0)
            break;

        int bolas[B];
        int diferencas[N + 1];

 
        int *ponteiro_bolas = bolas;
        int *ponteiro_diferencas = diferencas;

 
        for (int i = 0; i < B; i++) {
            scanf("%d", (ponteiro_bolas + i));
        }

 
        for (int i = 0; i <= N; i++) {
            *(ponteiro_diferencas + i) = 0;
        }

 
        for (int i = 0; i < B; i++) {
            for (int j = 0; j < B; j++) {
                int diferenca = abs(*(ponteiro_bolas + i) - *(ponteiro_bolas + j));
                if (diferenca <= N) {
                    *(ponteiro_diferencas + diferenca) = 1;
                }
            }
        }

     
        int completo = 1;
        for (int i = 1; i <= N; i++) {
            if (*(ponteiro_diferencas + i) == 0) {
                completo = 0;
                break;
            }
        }

        if (completo)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

