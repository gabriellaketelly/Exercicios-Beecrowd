#include <stdio.h>

int main() {

    float matriz[12][12], soma = 0, media, elemento;
    int coluna;
    char operacao;

    
    scanf("%d", &coluna);
    
    scanf(" %c", &operacao);

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%f", &elemento);
            matriz[i][j] = elemento;
        }
    }

    for(int i = 0; i < 12; i++) {
        soma += matriz[i][coluna];
    }

    if(operacao == 'S'){
        printf("%.1f\n", soma);
    } else if (operacao == 'M'){
        media = soma / 12;
        printf("%.1f\n", media); 
    }

    return 0;
}
