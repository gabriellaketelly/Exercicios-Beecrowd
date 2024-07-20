#include<stdio.h>
int main (){
    int valores_positivos = 0;
    float media, numero, soma_positivos = 0;
    
    for (int i = 6; i > 0; i--) {
        scanf("%f", &numero);
        if (numero > 0) {
            valores_positivos++;
            soma_positivos+=numero;
        }
    }
    
    media = (soma_positivos)/valores_positivos;
    
    printf("%d valores positivos\n", valores_positivos);
    printf("%.1f\n", media);
    
    return 0;
}
