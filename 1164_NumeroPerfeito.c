#include <stdio.h>

int main() {

    int casos, numero, soma, resto, j;

    scanf("%d", &casos);

    for(int i=0; i<casos; i++){
        scanf("%d", &numero);
        soma = 0;
        for(int j=1; j<numero; j++){
            resto = numero%j;
            if(resto==0){
                soma = soma+j;
            }
        }
        if(soma==numero){
            printf("%d eh perfeito\n", numero);
        } else{
            printf("%d nao eh perfeito\n", numero);
        }

    }

    return 0;
}
