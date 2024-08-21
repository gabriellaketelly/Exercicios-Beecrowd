#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int quant;

    while(scanf("%d", &quant) && quant != 0){
        char comando[1001];

        int direcao = 0;
        for(int i = 0; i < quant; i++){
            scanf(" %c", &comando[i]);
            if(comando[i] == 'D')
                direcao = (direcao + 1) % 4;
            else 
                direcao = (direcao + 3) % 4;
        }
        
        char direcoes[4] = {'N','L','S','O'};
        printf("%c\n", direcoes [direcao]);

    }

    return 0;

}
