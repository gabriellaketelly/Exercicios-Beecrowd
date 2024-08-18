#include <stdio.h>


int sequencia_granizo(int h0, int seq[]){
    seq[0] = h0;
    int n;

    for(n = 1; n < 500; n++){  
        if(seq[n-1] % 2 == 0)
            seq[n] = seq[n-1] / 2;  
        else
            seq[n] = 3 * seq[n-1] + 1;

        if(seq[n] == 1)
            break;
    }
    return n; 
}

void merge(int vetor[], int esquerda, int meio, int direita){
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int vetor_esquerda[n1], vetor_direita[n2];

    for(i = 0; i < n1; i++)
        vetor_esquerda[i] = vetor[esquerda + i];
    for(i = 0; i < n2; i++)
        vetor_direita[i] = vetor[meio + 1 + i];

    i = 0;
    j = 0;
    k = esquerda;

    while(i < n1 && j < n2){
        if(vetor_esquerda[i] <= vetor_direita[j]){
            vetor[k] = vetor_esquerda[i];
            i++;
        } else {
            vetor[k] = vetor_direita[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        vetor[k] = vetor_esquerda[i];
        i++;
        k++;
    }

    while(j < n2){
        vetor[k] = vetor_direita[j];
        j++;
        k++;
    }
}


void merge_sort(int vetor[], int esquerda, int direita){
    if(esquerda < direita){
        int meio = esquerda + (direita - esquerda) / 2;

        merge_sort(vetor, esquerda, meio);
        merge_sort(vetor, meio + 1, direita);

        merge(vetor, esquerda, meio, direita);
    }
}

int main(){
    int h0;
    int seq[500];

    while(scanf("%d", &h0) && h0 != 0){

        if(h0 == 1){
            printf("1\n");
        } else {
        int tamanho = sequencia_granizo(h0, seq);
        
        merge_sort(seq, 0, tamanho-1);
       
        printf("%d\n", seq[tamanho-1]);
        }
    }

    return 0;
}
