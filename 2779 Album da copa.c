#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int v[101];
    int aux;
    for (int i = 0; i < 101; i++)
        v[i] = 0;
    int count = 0;
    for (int i = 0; i < m; i++) {
        scanf("%d", &aux);
        if (v[aux] == 0) {
            v[aux] = 1;
            count++;
        }
    }
    printf("%d\n", n - count);
}
