#include <stdio.h>

int mdc(int n1, int n2){
    if(n2 == 0){
        return n1;
    } else if (n1 > n2){
        mdc(n1%n2,n2);
    } else {
        int temp = n1;
        n1 = n2;
        n2 = temp;
        mdc(n1, n2);
    }
}

int main(){
    int casos;
    int quant1, quant2;
    int resto = 0;

    scanf("%d", &casos);
    
    while(casos--) {
        scanf("%d %d", &quant1, &quant2);
        printf("%d\n", mdc(quant1,quant2));
    
    }
    
    return 0;
    
}
