#include <stdio.h>

int main() {

    int i, casos, contas;
    int indice = 0;
    int quedas = 0;
    int vetor[100];

    scanf("%d", &casos);

    for(int i = 0 ; i < casos ; i++)
         scanf("%d", &vetor[i]);
    
    
    for (int i = 0 ; i < casos - 1; i++){
         contas = vetor[i+1] - vetor[i];

        
        if (contas < 0){
            indice = i + 2;
            break;
        }
    } 

    printf("%d\n", indice);

    return 0;
}
