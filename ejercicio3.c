//Es par?
#include <stdio.h>                                                              /*Primero se incluyen las librerias*/

int main(int argc, char const *argv[]) {                                        /*Invocamos la funcion principal*/
  int num;                                                                      /*Declaramos la veriable a manejar*/

  printf("Hola!, para saber si tu numero es par teclea el numero(recuerda que debe ser entero):\n");/*Obtenemos el numero para trabajar*/
  scanf("%d",&num );

  if (num%2 == 0) {                                                             /*Vemos si el numero si es par o no e imprimimos el resultado*/
    printf("Tu numero si es par\n");
  }
  else{
    printf("Tu numero es impar\n");
  }
  return 0;
}
