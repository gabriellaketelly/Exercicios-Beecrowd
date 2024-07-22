#include <stdio.h>

int main(){
    int ordem;

    while(scanf("%d", &ordem) && ordem != 0){
        int matriz[100][100];
    
        for(int i = 0; i < ordem; i++)
            for( int j = 0; j < ordem; j++) {
                if (i <= j)
                    matriz[i][j] = j - i + 1;
                else if (i > j) 
                    matriz[i][j] = i - j + 1;
            }

        for (int i = 0; i < ordem; i++){
			for (int j = 0; j < ordem; j++) {
				if (j != 0)
					printf(" ");
				printf("%3d", matriz[i][j]);

			}
			printf("\n");
		}
		printf("\n");

	}
        
    return 0;
}
