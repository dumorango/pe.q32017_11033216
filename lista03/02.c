#include <stdio.h>
#include <string.h>

char * inverte_string(char * string)
{   
    int i = 0;
    int j = (strlen(string) - 1);    
    while( i <= j ) {        
        char temp = string[j];
        string[j] = string[i];
        string[i] = temp;
        i++; j--;        
    }        
    return string;
}
int main() {
    char entrada[255];    
    fgets(entrada, 255, stdin);
    printf("%s", inverte_string(entrada));
}