//TEMA:Tipos de datos, marcas de formato, Modificadores.
/*· 17 Diseña un programa que muestre la tabla ASCII desde su elemento de código numérico
32 hasta el de código numérico 126. En la tabla se mostrarán los códigos ASCII, además de
las respectivas representaciones como caracteres de sus elementos.*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char i;
  for ( i = 32; i <= 126; i++)
    printf("%d-%c\n",i,i );
  printf("\n");
  return 0;
}
//En este programa hise que imprimiera del numero 32 hasta el 126 de codigo ASCII con un for fue genial!!!
