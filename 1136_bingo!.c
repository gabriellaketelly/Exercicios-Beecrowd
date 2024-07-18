#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, quant_no_globo;

    while (scanf("%d %d", &N, &quant_no_globo) && N > 0 && quant_no_globo > 1) {
        int bolas_no_globo;
        int numero[101] = {0};  

        for (int i = 0; i < quant_no_globo; i++) {
            scanf("%d", &bolas_no_globo);
            numero[bolas_no_globo] = 1;  
        }

        int contagem2[101] = {0};  

        for (int j = 0; j <= N; j++) {
            if (numero[j]) {
                for (int k = 0; k <= N; k++) {
                    if (numero[k]) {
                        int subtracao = abs(j - k);
                        if (subtracao <= N) {
                            contagem2[subtracao] = 1;
                        }
                    }
                }
            }
        }

        
        int contador3 = 0;
        for (int o = 0; o <= N; o++) {
            if (contagem2[o] == 1) {
                contador3++;
            }
        }

        if (contador3 == N + 1) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
