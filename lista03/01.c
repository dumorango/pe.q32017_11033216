#include <stdio.h>


int e_vogal(char caracter)
{
    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
       caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'
    ) {
        return 1;
    }
    return 0;
}
int calcula_numero_de_vogais(char * palavra)
{
    int i, n;    
    while(palavra[i]!='\0') {
        printf("%c", palavra[i]);
        if(e_vogal(palavra[i])) {
            n++;
        }
        i++;
    }
    return n;
}
int main() {
    char entrada[255];
    fgets(entrada, 255, stdin);
    printf("%d", calcula_numero_de_vogais(entrada));
}