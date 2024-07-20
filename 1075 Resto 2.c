#include <stdio.h>

int main() {

    int n, i, resto;
    scanf("%d/n",&n);

    for(i=1; i<10000; i++){
        resto=i%n;
        if(resto==2){
            printf("%d\n",i);
        }
    }

    return 0;
}
