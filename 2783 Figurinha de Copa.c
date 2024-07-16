#include <stdio.h>

int main() {
    int espacos, carimbadas, compradas;
    int figurinha_carimbada, figurinha_comprada;
    int carimbada[100000] = {0}, comprada[100000] = {0}; // Ajuste o tamanho dos arrays para 100000, assumindo que o número de figurinhas não excede isso
    int ja_tem = 0;

    scanf("%d %d %d", &espacos, &carimbadas, &compradas);

    for (int i = 0; i < carimbadas; i++) {
        scanf("%d", &figurinha_carimbada);
        if (figurinha_carimbada >= 1 && figurinha_carimbada <= espacos) {   //garantir que tá no intervalo entre 0 e a quantidade de espaco delimitada no scanf.
            carimbada[figurinha_carimbada - 1] = 1; // Ajuste de índice para 0 a espacos-1, já que a alocação de memoria começa em 0. Entao só for 10 espacos 
        }                                          // e a figurinha for a 10, ele vai alocar no quadrado 10-1 = 9, já que 10 espaços é de 0-9. 
    }

    for (int i = 0; i < compradas; i++) {
        scanf("%d", &figurinha_comprada);
        if (figurinha_comprada >= 1 && figurinha_comprada <= espacos) {
            comprada[figurinha_comprada - 1] = 1; // Ajuste de índice para 0 a espacos-1.
        }
    }

    for (int i = 0; i < espacos; i++) {
        if (comprada[i] == 1 && carimbada[i] == 1) {
            ja_tem++;
        }
    }

    printf("%d\n", carimbadas - ja_tem);

    return 0;
}
