#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct crianca {
    char comportamento;
    char nome[21];
};

typedef struct crianca Crianca;

void ordena(Crianca lista[], int quant){
        Crianca temp;

         for (int i = 0; i < quant-1; i++) {
            for (int j = 0; j < quant-i-1; j++) {
                if (strcmp(lista[j].nome, lista[j+1].nome) > 0) {
                    temp = lista[j];
                    lista[j] = lista[j+1];
                    lista[j+1] = temp;
            }
        }
    }
}

int main(){
    int quant, comports = 0;

    scanf("%d", &quant);

    Crianca lista[quant];

    for (int i = 0; i < quant; i++){
        scanf(" %c %[^\n]s", &lista[i].comportamento, lista[i].nome);

        if(lista[i].comportamento == '+'){
            comports++;
        }
    }

    ordena(lista, quant);

    for (int i = 0; i < quant; i++)
        printf("%s\n", lista[i].nome);
    

    printf("Se comportaram: %d | Nao se comportaram: %d\n", comports, quant-comports);

    return 0;

}
