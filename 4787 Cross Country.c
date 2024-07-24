#include <stdio.h>
 
int main() {
 
    int N, M, parada;
    
    scanf("%d %d", &N, &M);
    
    parada = N%M;
    
    printf("%d\n", parada);
    
    return 0;
}
