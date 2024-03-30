/* Se listarmos todos os números naturais abaixo de 10 que são múltiplos
 * de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23. Encontre
 * a soma de todos os múltiplos de 3 ou 5 abaixo de 1000.
 * */
#include <stdio.h>

int main() {
  int n, x = 0;
  for (n = 1; n < 1000; n++) {
    if (n % 3 == 0 || n % 5 == 0) { x = x + n; }
  }
  printf("%d", x);
}
