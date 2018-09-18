#include <stdio.h>
#include <stdlib.h>


int main() {
  int i, j, **matriz, m, n;
  m=3;
  n=3;

  matriz = (int**) malloc (m * sizeof(int)); //reservando a quantidade de linhas(m) da matriz (m * sizeof(int))

  // criar as colunas com n indices
  for (i = 0; i < m; i++) {
    // ira percorrer as linhas (matriz[i]) para reservar em cada uma delas as n colunas
    matriz[i]= (int*) malloc (n * sizeof(int));
  }

  // preencher matriz
  for ( i = 0; i < m; i++) {
    for ( j = 0; j < n; j++) {
      if (i==j) {
        matriz[i][j] = 42;
      } else {
        matriz[i][j] = 0;
      }
    }
  }

  // printar a matriz
  for ( i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }


  return 0;
}
