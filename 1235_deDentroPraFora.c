#include <stdio.h>
#include <string.h>

int main() {
    int casos;

    scanf("%d", &casos);
    getchar();

    while(casos--) {

        char palavras[104], desembaralhada[104];
        
        fgets(palavras, sizeof(palavras), stdin);
        palavras[strcspn(palavras, "\n")] = '\0';

        int n = strlen(palavras);
        
        for(int i = 0; i < n/2; i++){
            desembaralhada[i] = palavras[n/2 - 1 - i];
        }

        for(int i = 0; i < n/2; i++){
            desembaralhada[n/2 + i] = palavras[n - 1 - i];
        }

        desembaralhada[n]= '\0';

        printf("%s\n", desembaralhada);
    }

    return 0;
}
