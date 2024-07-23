#include <stdio.h>

int main() {

    float matriz[12][12], soma = 0, media, elemento;
    char operacao;

    
    scanf("%c", &operacao);

    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &elemento);
            matriz[i][j] = elemento;
        }
    }

    
    for (int i = 0; i < 12; i++) 
        for (int j = 0; j < 12; j++) 
            if (i < j) 
                soma += matriz[i][j];
            
        
    

    
    if (operacao == 'S') 
        printf("%.1f\n", soma); 
    else if (operacao == 'M') 
        media = soma / 66; 
        printf("%.1f\n", media); 
    

    return 0;
}
