//raiz cuadrada
#include <stdio.h>
                                                          /*importo las librerias para tener acceso al las funciones */
#include <math.h>
int main(int argc, char const *argv[]) {
  float a,b;                                                                      /*declaro la variable*/
  printf("Introduzca el numero para sacarle la raiz:\n");                        /*obtengo el numero a trabajar*/
  scanf("%f",&a);
  if (a >= 0.0) {
    b=sqrt(a);                                                                 /*Luego revisamos si es negativo o positivo para pider sacar la raiz*/
  printf("El valor de su raiz cuadrada es:%f\n",b);
  }
  else{
    printf("No se puede sacar la raiz cuadrada de su numero ya qye es negativo\n");
  }
  return 0;
}                                   /*invoco la funcion main que es la principal*/
