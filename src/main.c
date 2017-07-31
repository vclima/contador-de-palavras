/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int palavras;
  c = 1;
  palavras=0;
  scanf("%c", &c);
  if(c!='\n'){
    palavras++;
    while (c != '\n') {
      scanf("%c", &c);
      if(c==' '){
        palavras++;
      }
    }
  }

  printf("%d\n",palavras);
  return 0;
}
