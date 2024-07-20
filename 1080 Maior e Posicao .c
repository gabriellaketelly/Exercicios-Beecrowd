#include <stdio.h>

int main() {
    int numero, maior = 0, indice;
    for (int i = 0; i < 100; i++) {
        scanf("%d\n", &numero);
        if (numero > maior) {
            maior = numero;
            indice = i+1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", indice);
  return 0;
}
