#include <stdio.h>
int main (){
  int x[1000], numero, contador;

  scanf("%d", &numero);

  for(int i = 0 ; i<1000 ; i++){
    if( i % numero == 0){
      contador = 0;
      x[i] = 0;
    } else {
      contador++;
      x[i] = contador;
    }

    printf("N[%d] = %d\n", i, x[i]);
    }

  return 0;
}
