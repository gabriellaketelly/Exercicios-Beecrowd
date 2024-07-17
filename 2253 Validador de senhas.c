#include <stdio.h>
#include <string.h>

int main() {
    char senha[101];

    while (1) {
        if (fgets(senha, sizeof(senha), stdin) == NULL) 
            break; 
        
        senha[strcspn(senha, "\n")] = '\0';

        int n = strlen(senha);
        int max = 0, min = 0, numero = 0, invalido = 0;

        for (int i = 0; i < n; i++) {
            if (senha[i] >= 'A' && senha[i] <= 'Z')
                max++;
            else if (senha[i] >= 'a' && senha[i] <= 'z')
                min++;
            else if (senha[i] >= '0' && senha[i] <= '9')
                numero++;
            else
                invalido++;
        }

        if ((n >= 6 && n <= 32) && max > 0 && min > 0 && numero > 0 && invalido == 0)
            printf("Senha valida.\n");
        else 
            printf("Senha invalida.\n");
    }

    return 0;
}
