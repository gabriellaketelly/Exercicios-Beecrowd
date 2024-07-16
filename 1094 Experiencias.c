#include <stdio.h>

int main() {

    int casos,total, quantia, coelhos=0, ratos=0, sapos=0;
    char tipo;
    float coelhos2=0, ratos2=0, sapos2=0, percentual_C, percentual_R, percentual_S;
    scanf("%d", &casos);

    for(int i=0; i<casos; i++){
        scanf("%d %c", &quantia, &tipo);
        if(tipo=='C'){
            coelhos+=quantia;
            coelhos2+=quantia;
        } else if(tipo=='R'){
            ratos+=quantia;
            ratos2+=quantia;
        } else if(tipo=='S'){
            sapos+=quantia;
            sapos2+=quantia;
        }
    }

    total = sapos + coelhos + ratos;
    percentual_C = (coelhos2/total)*100;
    percentual_R = (ratos2/total)*100;
    percentual_S = (sapos2/total)*100;
    

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", percentual_C);
    printf("Percentual de ratos: %.2f %%\n", percentual_R);
    printf("Percentual de sapos: %.2f %%\n", percentual_S);

    return 0;
}
