//TEMA:DIRECCIONES DE MEMEORIA
//Ejemplo:direcciones.c
#include <stdio.h>

int main(int argc, char const *argv[]) {
   int a,b;
  a=0;
  b=a+8;
  printf("El valor de la dieccion es: %u\n",(unsigned int) &a );
  printf("El valor de la direcciione es %u\n",(unsigned int )&b );
  return 0;
}
