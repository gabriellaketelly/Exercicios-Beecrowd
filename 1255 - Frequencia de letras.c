#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char letras[201];
    int casos;
    char letra;

    scanf("%d", &casos);
    getchar();

    while(casos--){
        int frequencia[201] = {0};
        
        fgets(letras, sizeof(letras), stdin);
        letras[strcspn(letras, "\n")] = '\0';
        int quant = strlen(letras);

        for(int i = 0; i < quant; i++)
            if (letras[i] >= 'a' && letras[i] <= 'z' || letras[i] >= 'A' && letras[i] <= 'Z'){
                letra = tolower(letras[i]);
                frequencia[letra - 'a'] += 1;
            }

        int maior_frequencia = 0;
        for (int i = 0; i < 26; i++) 
            if (frequencia[i] > maior_frequencia) 
                maior_frequencia = frequencia[i];


        for (int i = 0; i < 26; i++) 
            if (frequencia[i] == maior_frequencia) 
                printf("%c", i + 'a');

        printf("\n");

    }

}
