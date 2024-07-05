#include <stdio.h>
#include <string.h>

int main() {

    char idioma[100][21];
    int casos, pessoas;

    scanf("%d", &casos);

    for(int i = 0 ; i < casos ; i++) {
        scanf("%d", &pessoas);
        for( int j = 0 ; j < pessoas ; j++)
            scanf("%s", idioma[j]);
            
        int iguais = 1;
        for (int j = 1 ; j < pessoas ; j++) {
            if (strcmp(idioma[0], idioma[j]) != 0){
                iguais = 0;
                break;
            }
        }

        if (iguais == 1){
            printf("%s\n", idioma[0]);
        } else {
            printf("ingles\n");
        }
    }
    return 0;
}
