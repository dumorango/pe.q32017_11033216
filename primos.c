#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char eh_primo(unsigned int x)
{
  unsigned int i;
  
  if (x < 2) return 0;
  
  /* se exsitir */
  for (i=2;i<=sqrt(x);i++) {
    if ((x%i)==0) return 0;
  }
  
  return 1;
}

void preenche_primo (char * primos, unsigned int n)
{
  unsigned int i;
  
  for (i=0;i<n;i++) {
    primos[i] = eh_primo(i);
  }
}

unsigned int soma (char * v, unsigned int n)
{
  unsigned int i, soma = 0;
  
  for (i=0;i<n;i++) {
    soma += v[i];
  }
  
  return soma;
}

int main (int argc, char **argv)
{
  char * primos;
  unsigned int n;

  if (argc < 2) {
    printf("Uso: %s n\n", argv[0]);
    return -1;
  }
  
  n = atoi(argv[1]);
  
  primos = malloc(sizeof(char)*n);
  if (!primos) {
    printf("EspaÃ§o insuficiente de memÃ³ria!\n");
    return -1;
  }
  
  preenche_primo(primos, n);
  printf("%d\n", soma(primos, n));
  
  free(primos);
  
  return 0;
  
}
