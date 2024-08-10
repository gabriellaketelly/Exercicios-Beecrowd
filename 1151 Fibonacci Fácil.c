#include <stdio.h>

void preenche_vetor(int n, int fib[]){
    fib[0] = 0;
    if (n > 1)
        fib[1] = 1;

    for(int i = 2; i < n; i++) 
        fib[i] = fib[i-1] + fib[i-2];
    
}

int main(){
    int n;
    int fib[47];

    scanf("%d", &n);

    preenche_vetor(n, fib);

    for(int i = 0; i < n; i++){
        if(i==n-1)
            printf("%d\n", fib[i]);  
        else
            printf("%d ", fib[i]);
    }
    
    return 0;
}
