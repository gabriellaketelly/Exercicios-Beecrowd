#include <stdio.h>

int main() {

    double N[100], numero;
    int i;

    scanf("%lf", &numero);

    N[0] = numero;

    for(int i = 1 ; i < 100 ; i++){
        N[i] = N[i-1] / 2;
    }

    for(int i = 0 ; i<100 ; i++){
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
