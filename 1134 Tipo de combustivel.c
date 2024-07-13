#include<stdio.h>
int main (){
    int codigo, gasolina=0, diesel=0, alcool=0;

    while(codigo!=4) {
        scanf("%d", &codigo);
        if(codigo==1)
            alcool++;
        else if(codigo==2)
            gasolina++;
        else if(codigo==3)
            diesel++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
    return 0;

}
