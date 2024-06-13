#include <stdio.h>
#include <stdlib.h>

int main() {
    char j, jf;
    int i, n;

    scanf("%c %d %c %d", &j, &i, &jf, &n);

    int c1 = abs(n - i);
    int c2 = abs(jf - 'a' - (j - 'a'));
    if ((c1 == 2 && c2 == 1) || (c1 == 1 && c2 == 2)) {
        printf("VALIDO\n");
    } else {
        printf("INVALIDO\n");
    }
}