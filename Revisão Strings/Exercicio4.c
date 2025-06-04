#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
char frase[100];
fgets(frase, 201, stdin);

int cont = 0;
int letras = 0;
char *p = frase;

while(*p != '\0'){
    if(isalpha(*p)){
        letras++;
    }
    else if(*p == ' ' || *p == '\n'){
        if(letras > 3){
            cont++;
        }
        letras = 0;
    }
    p++;
}

printf("%d\n", cont);

    return 0;
}