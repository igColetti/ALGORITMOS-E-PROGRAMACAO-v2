#include <stdio.h>
#include <string.h>
 
void main() {
    char nomes[5][70];
    char busca[70];
    int i,j,v;
    float aux, aux2;
    char encerra[3];
    aux2 = 0;
 
   
    for ( i = 0; i < 5; i++) {
 
        printf("\nDigite o nome a ser armazenado: ");
        gets(nomes[i]);
 
    }
 
 
    do {
 
      printf("\nInforme um nome para realizar a busca: ");
      gets(busca);
 
      for ( v = 0; v < 5; v++) {
 
        if (strcmp(nomes[v],busca) == 0 ) {
 
          printf("\nPossui registros");
          printf("\n %s", nomes[v]);
          printf("\n\n");
 
        }
 
        if (strcmp(nomes[v],busca) != 0 ) {
 
            aux2 = 1;
 
        }
 
 
      }
 
      if ( aux2 = 1 ) {
 
          printf("\nNão foi localizado nenhum nome com a busca informada.\n");
 
      }
 
      printf("\nDeseja continuar buscando ?");
      printf("\nDigite FIM ou CONTINUAR: ");
      gets(encerra);
 
 
    } while (strcmp(encerra,"FIM") != 0 );
 
 
 
}

