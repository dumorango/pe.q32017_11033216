#include <stdio.h>
#include <stdlib.h>

int len (char * s)
{
  int n = 0;
  
  while(s[n]!='\0') n++;
  
  return n;
  
}

char * concatena (char * s1, char * s2)
{
  int l1, l2, i;
  char * s3;
  
  l1 = len(s1);
  l2 = len(s2);
  
  s3 = malloc(sizeof(char)*(l1+l2));
  
  /* copia s1 para s3 */
  for (i=0;i<l1;i++) {
    s3[i] = s1[i];
  }
  
  /* copia s2 para s3, a partir da posicao l1 */
  for (i=0;i<l2;i++) {
    s3[l1+i] = s2[i];
  }
  
  return s3;
}

int main ()
{
  char s1[255] = "Ola";
  char s2[255] = " Mundo";
  char * s3 = concatena(s1,s2);
  
  printf("%s\n", s3);
  
  free(s3);
  
  return 0;
  
}
