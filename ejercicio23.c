//TEMA:ENTRADA POR TECLADO CON SCANF
/*341 ¿Qué pasa si el usuario escribe la siguiente secuencia de caracteres como datos de
entrada en la ejecución del programa?*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,c;
  char f;
  float d;
  c=0;
  printf("los valores de a,d,b y c son:%d,%f,%d,%d\n",a,d,b,c);
  printf("introduzca los valores de a, d, b, c:\n");
  fflush(stdin);
  scanf("%d",&a);
  fflush(stdin);
  scanf("%f",&d);
  fflush(stdin);
  scanf("%d",&b);
  scanf("%s",&f );
  scanf("%d",&c);
  printf("los valores de a,d,b y c son:%d,%f,%d,%d\n",a,d,b,c);
  return 0;
}
/*En los resultados de hacer el ejercico de ingresar 20   2 45  x/n me
 aparecio que al imprimir los valores de las varables me resulto de lo siguente:
 los valores de a, d, b y c son:20,2.000000,45,889358176 y podemos ver que
  el valor de c despues de haber metido una x nos dio un numero
  */
