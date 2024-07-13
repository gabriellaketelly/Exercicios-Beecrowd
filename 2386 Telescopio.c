#include <stdio.h>

int main() {

    int abertura, visiveis = 0, estrelas;
    double conta, fotons;

    scanf("%d", &abertura);
    scanf("%d", &estrelas);

    for(int i = 0 ; i < estrelas ; i++){
        scanf("%lf", &fotons);
        conta = 40000/fotons;
        if(conta <= (double)abertura/1000){
            visiveis++;
        }
    }

    printf("%d\n", visiveis);

    return 0;
}
