#include <stdio.h>

double soma_denominador(int n){
    if (n == 0)
        return 0;  
    
    return 1.0 / (6 + soma_denominador(n - 1));
}

int main(){
    int n;
    double raiz_quadrada;

    scanf("%d", &n);

    raiz_quadrada = 3 + soma_denominador(n);

    printf("%.10lf\n", raiz_quadrada);

    return 0;
}
