#include <stdio.h>
#include <stdlib.h>

void seta_valores (char * v, char valor, int inicial, int n, int passo) 
{
  unsigned int i;

  for (i=inicial;i<n;i+=passo) {
     v[i] = valor;
  }
}

void preenche_primo (char * primos, unsigned int n)
{
  unsigned int i;

  /* preenche tudo inicialmente com 1 */
  seta_valores(primos, 1, 0, n, 1);

  /* 0 e 1 nao sao primos */
  primos[0] = primos[1] = 0;
  
  /* remove os multiplos de primos */
  for (i=2;i<n;i++) {
    if (primos[i]) {
      seta_valores(primos, 0, 2*i, n, i);
    }
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
