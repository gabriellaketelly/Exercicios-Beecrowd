#include <stdio.h>
int main (){
    int soma_dos_naos_multiplos=0;
    int numero_1, numero_2, i=0, conta;
    scanf("%d %d", &numero_1, &numero_2);

        if(numero_1<numero_2){
    while((numero_1+i)<=numero_2){
        conta=(numero_1+i)%13;
        if(conta!=0){
        soma_dos_naos_multiplos+=numero_1+i; 
        }
        i++;
    }
    } else{
        while((numero_2+i)<=numero_1){
        conta=(numero_2+i)%13;
        if(conta!=0){
        soma_dos_naos_multiplos+=numero_2+i; 
        }
        i++;
            }
    }
    printf("%d\n",soma_dos_naos_multiplos);
    return 0;
}
