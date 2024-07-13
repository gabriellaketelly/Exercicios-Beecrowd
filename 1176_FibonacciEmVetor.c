#include <stdio.h>

int main() {
    int casos, numero;
    double fib[1000];

    
    fib[0] = 0;
    fib[1] = 1;

    
    scanf("%d", &casos);

    
    for (int i = 2; i < 1000; i++) {
        fib[i] = fib[i-2] + fib[i-1];
    }

    
    for (int i = 0; i < casos; i++) {
        scanf("%d", &numero);
        if (numero < 1000) {
            printf("Fib(%d) = %.0lf\n", numero, fib[numero]);
        } 
    }

    return 0;
}
