#include <stdio.h>
int main (){
    int n, x1, y1, x2, y2, xm, ym, dentro;
    dentro = 0;
    int teste = 1;
  
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && (x1!=0 || y1!=0 || x2!=0 || y2!=0)) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &xm, &ym);
            if ((xm >= x1 && xm <= x2) && (ym <= y1 && ym >= y2)) {
                dentro++;
            }
        }
        printf("Teste %d\n", teste);
        printf("%d", dentro); 
        teste++;   
    }
    return 0;
}