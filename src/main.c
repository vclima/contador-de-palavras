/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char c,*teste,ant,separador;
  char separadores[9];
  int palavras;
  short estado;
  strcpy(separadores," .,:;-!?");
  palavras=0;
  ant='\0';
  estado=0;
  scanf("%c",&c);
  teste=strchr(separadores,c);
  if(teste==NULL){
    palavras++; //A string não é uma string de caracteres de pontuação
  }
  while(c!='\n'){
    estado=0;
    ant=c;
    scanf("%c",&c);
    teste=strchr(separadores,c);
    if(teste!=NULL){
      estado=1;
      palavras++;
    }
    while(estado==1){
      separador=c;
      scanf("%c",&c);
      teste=strchr(separadores,c);
      if(c=='\n'){
        palavras--;
      }
      if(teste==NULL&&isdigit(c)&&isdigit(ant)&&(separador=='.'||separador==',')){
        palavras--;
      }
      if(teste==NULL){
        estado=0;
      }
    }
  }
  printf("%d\n",palavras);
  return 0;
}
