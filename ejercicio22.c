//TEMA:ENTRADA POR TECLADO CON scanf
/*· 339 ¿Qué pasa si el usuario escribe la siguiente secuencia de caracteres como datos de
entrada en la ejecución del programa?(Prueba este ejercicio con el ordenador.)*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  float d;
  printf("introduce los valore de a y d luego aplica salto de liena y y pon los demas:\n");
  scanf("%d",&a);
  scanf("%f",&d);
  scanf("%d",&b);
  scanf("%d",&c);
  printf("El valor de a es:%d, el valor de b es:%d, el valor del decimal d es:%f,y el valor de c es:%d.\n",a,b,d,c );
  return 0;
}
/*Lo que pasa es que cuando doy el salto de linea para introducir los valores solo me espera a que meta los demas*/
