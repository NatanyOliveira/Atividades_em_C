#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main () {
    int N, M;

    while(1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) 
            break;
    
    int *vetor = (int *) malloc((N + 1) * sizeof(int));
    if(vetor == NULL) {
        return 1;
    }

    memset (vetor, 0, (N + 1) * sizeof(int));

    int clones  = 0;

    for(int i = 0; i < M; i++) {
        int bilhete;
        scanf("%d", &bilhete);

        (*(vetor + bilhete))++;
        if(*(vetor + bilhete) == 2) {
            clones++;
        }
    }
   printf("%d\n", clones);

   free(vetor);

    return 0;
}
