//Ejercicios de que muestra por pantalla relacionados con los tipos de datos, su uso, Marcas de formato para texto y modificadores
//·Ejercicio 16 ¿Qué muestra por pantalla cada uno de estos programas? inciso e)

#include <stdio.h>
int main(int argc, char const *argv[]) {
  char i;
  for ( i = 'A'; i <= 'z'; i++)
    printf("%d ",(int)i);
  printf("\n");
  return 0;
}

/*En este el procedimiento fue muy similar solo que en este caso se casteo
la variable de tipo char a int y con eso pudimos imprimir los valores de los numeros  */
