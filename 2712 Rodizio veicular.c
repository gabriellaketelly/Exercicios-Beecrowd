#include <stdio.h>
#include <string.h>

    int main() {
        char placa[101];
        int casos, tamanho;

        scanf("%d", &casos);

        while (casos--) {
            scanf("%s", placa);
            tamanho = strlen(placa);
            int errado = 0;
            
            for (int j = 0; j < tamanho; j++){
                if((j>=0 && j<=2) && (placa[j] >= 'A' && placa[j] <= 'Z'))
                    errado = 0;
                else if (j == 3 && placa[j] == '-')
                    errado = 0;
                else if ((j>=4 && j<=7) && (placa[j]>='0' && placa[j]<='9'))
                    errado = 0;
                else {
                    errado = 1;
                    break;
                }
            }
            if (tamanho != 8)
                errado = 1;
            
            if(!errado) {
                if(placa[7]=='1' || placa[7]=='2')
                    printf("MONDAY\n");
                else if(placa[7]=='3' || placa[7]=='4')
                    printf("TUESDAY\n");
                else if(placa[7]=='5' || placa[7]=='6')
                    printf("WEDNESDAY\n");
                else if(placa[7]=='7' || placa[7]=='8')
                    printf("THURSDAY\n");
                else 
                    printf("FRIDAY\n");
    
            } else 
                printf("FAILURE\n");
            
        }
        return 0;
            
    }
