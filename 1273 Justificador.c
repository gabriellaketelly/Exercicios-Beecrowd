#include <stdio.h>
#include <string.h>

int main() {
    int casos;
    int primeiroCaso = 1;  
    
    while(scanf("%d", &casos) && casos != 0) {
        char palavras[51][51];
        int maior = 0;

        for(int i = 0; i < casos; i++) {
            scanf("%s", palavras[i]);
            int tamanho = strlen(palavras[i]);
            if(tamanho > maior) 
                maior = tamanho;
            
        }

        if(!primeiroCaso) 
            printf("\n");  
        

        for(int i = 0; i < casos; i++) 
            printf("%*s\n", maior, palavras[i]);
        

        primeiroCaso = 0;  
    }

    return 0;
}
