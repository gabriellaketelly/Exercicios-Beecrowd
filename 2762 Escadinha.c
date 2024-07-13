#include <stdio.h>

int main() {
    int quantidade, numero, subtracao[1000], escadinhas = 0; 
    int vetor[1000];

    scanf("%d", &quantidade);

    if(quantidade == 1) {
        escadinhas = 1;
    } else {
        
        for(int i = 0 ; i < quantidade ; i++){
            scanf("%d", &numero);
            vetor[i] = numero;
        }

        
        for(int i = 0 ; i < quantidade - 1; i++){
            subtracao[i] = vetor[i+1] - vetor[i];
        }

        
        escadinhas = 1; 

        
        for(int i = 0 ; i < quantidade - 2 ; i++){
            if(subtracao[i+1] != subtracao[i]){
                escadinhas++;
            }
        }
    }

    printf("%d\n", escadinhas);

    return 0;
}
