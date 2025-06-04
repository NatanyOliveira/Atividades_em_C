#include <stdio.h>
int main(){
char palavras[100];
char *p;
int contador = 0;

scanf("%s", palavras);
p = palavras;

while(*p != '\0'){
    if(*p == 'a' || *p =='e' || *p == 'i' || *p == 'o' || *p == 'u'
    || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U'){
        contador++;
    }
    p++;
}
printf("%d\n", contador);
    return 0;
}