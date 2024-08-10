#include <stdio.h>
#include <string.h>

struct carnes {
    char nome[21];
    int validade;
};

typedef struct carnes carnes;

void ordena(int n, carnes carne[]){
    carnes temp;

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if (carne[j].validade < carne[i].validade) {
                temp = carne[i];
                carne[i] = carne[j];
                carne[j] = temp;
            }
        

}

int main() {
    carnes carne[10];
    int quant;

    while(scanf("%d", &quant) != EOF){
        for (int i = 0; i < quant; i++)
            scanf("%s %d", carne[i].nome, &carne[i].validade);

        ordena(quant, carne);

        for(int i = 0; i < quant; i++){
            if(i == quant - 1)
                printf("%s\n", carne[i].nome);
            else
                printf("%s ", carne[i].nome);
        }
    }

    return 0;

}
