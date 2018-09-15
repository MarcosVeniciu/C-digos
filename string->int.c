#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[]) {
  int valor;
  char letras[2];
  printf("informe um numero: ");
  scanf("%s", letras);

  valor = atoi(letras);
  printf(" numero %d\n", valor);

  return 0;
}
