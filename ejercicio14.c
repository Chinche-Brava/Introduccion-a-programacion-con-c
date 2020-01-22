//Ejercicios de que muestra por pantalla relacionados con los tipos de datos y su uso
//ejercicio numero: · 16 ¿Qué muestra por pantalla cada uno de estos programas? inciso a)
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char i;
  for ( i = 'A'; i <= 'Z'; i++)
    printf("%c\n",i);
  printf("\n");

  return 0;
}
/*Debido a que escribimos la marca de formato "%c" decimos que vamos a imprimr el caracater en este caso letras en ves del numero en el codigo ASCII.
Luego tenemos un for en el cual decimos que i es igual a 'A' el cual su valor en a
ASCII es 65 entonces si * es menor a 'Z' que en codigo ASCII es 90 vomos a imprimir su caracter
y luego se le agregara un al valor en la variable i imprimiendo asi las letras del abecedario*/
