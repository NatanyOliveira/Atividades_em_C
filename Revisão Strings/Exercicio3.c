#include <stdio.h>
#include <stdlib.h>

int main() {
char palavra[51], letra;
int cont = 0;
scanf("%s", palavra);
scanf("%c", &letra);

char *p = palavra;

while(*p != '\0'){
    if(*p == letra){
        cont++;
    }
    p++;
}

printf("%d\n", cont);

    return 0;
}