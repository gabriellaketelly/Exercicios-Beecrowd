#include <stdio.h>

int fatorial (int numero) {
    if (numero <= 1)    
        return 1;
    
    return numero * fatorial (numero - 1);
}

int main (){
    int numero;

    scanf("%d", &numero);

    printf("%d\n", fatorial(numero));

}
