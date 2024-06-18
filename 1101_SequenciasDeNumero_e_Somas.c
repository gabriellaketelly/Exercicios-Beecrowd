#include <stdio.h>

int main() {

    int m, n;
    while(scanf("%d %d", &m, &n )) {
        int soma=0;
        if (m <= 0 || n <= 0)
            break;
        if(m>n) {
            for (int i=n; i<=m; i++) {
                printf("%d ", i);
                soma+=i;
            }
        } else {
            for(int i=m; i<=n; i++) {
                printf("%d ", i);
                soma+=i;
            }
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}
