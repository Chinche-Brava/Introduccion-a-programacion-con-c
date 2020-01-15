// Ejercicio 10 identa correctamente este programa
#include<stdio.h>                                                               /*Primero importamos las libreria*/

int main(int argc, char const *argv[]) {                                        /*luego invoco la funcion main*/
  int a,b;                                                                      /*declaro las viables a y b*/
  scanf("%d",&a);                                                               /*invoco la funcion scanf para obtener el valor de las variables*/
  scanf("%d",&b);
  while (a>b) {                                                                 /*Ultilizo el while para hacer que el usuario introduzca a b como mayor que a*/
    scanf("%d",&a);
    scanf("%d",&b);
  }
  printf("%d %d\a \n",a,b);
                                                          /*Al final lo imprimo*/
  return 0;
}
