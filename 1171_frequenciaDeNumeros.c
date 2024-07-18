#include <stdio.h>

int main() {

    int casos, numero, quant[2001]={0};
    scanf("%d", &casos);

    for(int i = 0 ; i < casos ; i++){
        scanf("%d", &numero);
        quant[numero] += 1;
    }

    for(int i = 0 ; i <= 2000 ; i++){
        if (quant[i])
            printf("%d aparece %d vez(es)\n", i, quant[i]);
    }

    return 0;
}
