#include<stdio.h>
int main(){
    int numero_de_linhas;
    int c1=1, c2=2, c3=3;

    scanf("%d", &numero_de_linhas);
    for( int i=0; i<numero_de_linhas; i++){
        printf("%d %d %d PUM\n", c1, c2, c3);
        c1+=4;
        c2+=4;
        c3+=4;
    }
    return 0;
}