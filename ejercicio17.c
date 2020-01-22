//Ejercicios de que muestra por pantalla relacionados con los tipos de datos y su uso.
//·Ejercicio 16 ¿Qué muestra por pantalla cada uno de estos programas? inciso d)

#include <stdio.h>


int main(int argc, char const *argv[]) {
  int i;
  for ( i = 'A'; i <= 'Z'; i++)
    printf("%d-%c \n",i,i);
  printf("\n");
  return 0;
}
/*En este ejercicico es similar a los anteriores solo que en este no imprimimos los caracteres como letras ,no en este imprimimos su valor en numero*/
