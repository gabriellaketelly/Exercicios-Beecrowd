#include <stdio.h> 

int main(){
    
    int bilhetes, convidados;
    

    while (scanf("%d %d", &bilhetes, &convidados) && bilhetes > 0 && convidados > 0) {

        int quant[20001]={0};
        int contador = 0;
        int numero;

        for(int i = 0; i < convidados ; i++) {
            scanf("%d", &numero);
            quant[numero]+=1;
        }

        for(int i = 0; i <= 20000; i++) {
            if(quant[i]>1)
            contador++;
        }

        printf("%d\n", contador);

    }

    return 0;

}
