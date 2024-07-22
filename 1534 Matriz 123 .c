#include <stdio.h>

int main(){
    int ordem;

    while(scanf("%d", &ordem) != EOF){
        int matriz[70][70];
    
        for(int i = 0; i < ordem; i++){
            for( int j = 0; j < ordem; j++){
                if ( i == j ){
                    int centro = (ordem - 1) / 2;
                    if ( i == centro && j == centro ){
                        if( ordem % 2 == 1)
                            matriz[i][j] = 2;
                        else 
                            matriz[i][j] = 1;
                    } else {
                        matriz[i][j] = 1;
                    }
                } else if ( i + j == ordem - 1) {
                    matriz [i][j] = 2;
                } else { 
                    matriz[i][j] = 3;
                }   
            }
        }

        for(int i = 0; i < ordem; i++){
            for( int j = 0; j < ordem; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }
        
    return 0;
}
