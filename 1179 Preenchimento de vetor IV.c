#include <stdio.h>

int main() {
    int numeros[15];
    int Par[5], Impar[5];
    int countPar = 0, countImpar
  = 0;


    for (int i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }


    for (int i = 0; i < 15; i++) {
        if (numeros[i] % 2 == 0) {
            Par[countPar] = numeros[i];
            countPar++;
            if (countPar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, Par[j]);
                }
                countPar = 0;
            }
        } else {
            Impar[countImpar] = numeros[i];
            countImpar++;
            if (countImpar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, Impar[j]);
                }
                countImpar = 0;
            }
        }
    }

    for (int i = 0; i < countImpar; i++) {
        printf("impar[%d] = %d\n", i, Impar[i]);
    }

    for (int i = 0; i < countPar; i++) {
        printf("par[%d] = %d\n", i, Par[i]);
    }

    return 0;
}
