#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personagem{
    char nome[100];
    int poder;
    int matou;
    int morreu;
};

typedef struct personagem personagem;

void ordena(personagem candidato[], int quant){
    personagem aux;

    for (int i = 0; i < quant - 1; i++) 
        for (int j = i + 1; j < quant; j++) {
            if (candidato[i].poder < candidato[j].poder) {
                aux = candidato[i];
                candidato[i] = candidato[j];
                candidato[j] = aux;
            } else if ( candidato[i].poder == candidato[j].poder){
                if (candidato[i].matou < candidato[j].matou) {
                    aux = candidato[i];
                    candidato[i] = candidato[j];
                    candidato[j] = aux;    
                } else if ( candidato[i].matou == candidato[j].matou){
                    if (candidato[i].morreu > candidato[j].morreu) {
                        aux = candidato[i];
                        candidato[i] = candidato[j];
                        candidato[j] = aux;    
                    } else if (candidato[i].morreu == candidato[j].morreu){
                        if (strcmp(candidato[i].nome, candidato[j].nome) > 0){
                            aux = candidato[i];
                            candidato[i] = candidato[j];
                            candidato[j] = aux;
                        }
                    }
                }
            }
        }
}

int main () {
    int quant;

    scanf("%d", &quant);
        personagem *candidato = (personagem*)malloc(quant*sizeof(personagem));

    for (int i = 0; i < quant; i++) {
        scanf("%s %d %d %d", candidato[i].nome, &candidato[i].poder, &candidato[i].matou, &candidato[i].morreu);
    }

    ordena(candidato, quant);

    printf("%s\n", candidato[0].nome);
    
    free(candidato);

    return 0;
}
