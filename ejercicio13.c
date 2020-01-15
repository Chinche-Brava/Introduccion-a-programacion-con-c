//TEMA:Modificadores.

#include <stdio.h>
int main(int argc, char const *argv[]) {
  char a = 'a';
  int  i = 1000000;
  float f = 2e1;
  printf("c   : %c, %hhd <- Importante estudiar la diferencia\n",a,a );
  printf("i   : %d |%10d|%-10d|\n",i,i,i );
  printf("f   : %f |%10.2f|%+4.2f|\n",f,f,f );
  return 0;
}
/*Este programa me encenia usar un poco el codgo ASCCI, tambien a con
los enteros a utillizar modificadores paara poner hespacios hacia la derecha
o hacia la izquiereda y tambien con los de tipo float a dejer un numero
de decmales y a imprimir con el signo*/
