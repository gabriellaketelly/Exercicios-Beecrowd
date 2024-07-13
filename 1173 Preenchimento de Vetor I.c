#include<stdio.h>
int main(){
  int valor;
  int n[10];

  scanf("%d", &valor);
  n[0] = valor;

  for(int i = 1 ; i<10 ; i++){
    n[i] = 2*n[i-1];
  }

  for(int i = 0; i<10; i++){
    printf("N[%d] = %d\n", i, n[i]);
  }
  return 0;
}
