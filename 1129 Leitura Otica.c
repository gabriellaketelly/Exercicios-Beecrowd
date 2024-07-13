#include <stdio.h>

int main() {

    int questoes, alternativa, indice;

    while(scanf("%d", &questoes) == 1){
        for(int i = 0; i < questoes; i++){
            int marcadas = 0;
            indice = -1;

            for(int j = 0; j < 5; j++){
                scanf("%d", &alternativa);
                if(alternativa<=127){
                    marcadas++;
                    indice = j;
                }
            }
            if (marcadas == 1) {
                printf("%c\n", indice + 'A');
            } else {
                printf("*\n");
            }
        }

    }


    return 0;
}
