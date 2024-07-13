#include <stdio.h>

int main() {

    int itens_total, bolinhos, itens, bolinhosN = 0, bolinhosS = 0;

    scanf("%d %d", &itens_total, &bolinhos);

    for(int i = 0; i < 2*itens_total; i++){
        scanf("%d", &itens);
        if(i>=0 && i<itens_total) {
            if(itens==1)
                bolinhosN++;
        } else {
            if(itens==1)
                bolinhosS++;
        }
    }

    if(bolinhosN == bolinhos)
        printf("Tudo certo.\n");
    else if (bolinhosS == bolinhos)
        printf("Pegou de Samuel.\n");
    else if (bolinhosN != bolinhos && bolinhosS != bolinhos)
        printf("Pegou de um estranho.\n");

    return 0;
}
