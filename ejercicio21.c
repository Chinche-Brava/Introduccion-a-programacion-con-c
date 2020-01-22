//TEMA:ENTRADA POR TECLADO CON scanf
/*· 338 ¿Qué pasa si el usuario escribe la siguiente secuencia de caracteres como datos de
entrada en la ejecución del programa? (Prueba este ejercicio con el ordenador.)*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,c;
  float d;

  printf("Introduzca un valor un valor entero, un floatante y otros dos enteros:\n");
  scanf("%d",&a);
  scanf("%f",&d);
  scanf("%d",&b);
  scanf("%d",&c);
  printf("el primer valor es:%d, el segundo es:%f, el tercero es el valor:%d y el cuarto es el valor: %d.\n",a,d,b,c);
  return 0;
}
