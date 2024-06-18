#include <stdio.h>
 
int main() {
 
    int candidatos, votos, maior=0, inscricao, Carlos=0;
    scanf("%d", &candidatos);
    
    for(int i=0; i<candidatos; i++){
        scanf("%d", &votos);
            if (votos > maior){
                maior = votos;
                inscricao = i + 1;
            }
            
            if(i==0){
                Carlos+=votos;
            }
    }
    
    if(inscricao==1 && Carlos==maior){
        printf("S\n");
    } else{
        printf("N\n");
    }
 
    return 0;
}
