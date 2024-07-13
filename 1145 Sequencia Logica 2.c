#include<stdio.h>
int main(){
    int x, y, i, j;
    scanf("%d %d", &x, &y);

        for(int j=0; j<y; j+=x){
            for(int i=1; i<=x; i++){
                printf("%d ", i+j);
            }
            printf("\n");
            
       }
    
    return 0;
}
