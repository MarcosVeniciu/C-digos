#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int charcount( FILE *const fin );

int main(){

char leitura[999], espaco[2], contador=0;
FILE *ptrArquivo;
ptrArquivo = fopen("teste.txt", "r");

if(ptrArquivo == NULL)
{
    printf("ERRO");
}
else
    printf("Sucesso!");

if(ptrArquivo)
  {
    while(fscanf(ptrArquivo, "%s", leitura)!=EOF)
    {
        printf( "Character count: %d.\n", charcount( ptrArquivo ) );
    }

  }
  return 0;
}



int charcount( FILE *const fin )
{
    int c, count;

    count = 0;
    for( ;; )
    {
        c = fgetc( fin );
        if( c == '\n' )
          ++count;
        if (c == EOF)
        break;
    }

    return count;
}
