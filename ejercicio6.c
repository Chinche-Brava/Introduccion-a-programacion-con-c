//Es primero
#include <stdio.h>                                                              /*incluimos las librerias */

int main(int argc, char const *argv[]) {                                        /*invocams la funcion principal(main)*/
  int a;
  int n;
  printf("Introduce el valor del numero para saber si es primo o no:\n");
  scanf("%d",&a );
  n=2;


  while (n<a) {
    if (a%n==0) {
      break;
    }
    n+=1;
  }
  if (a==n) {
    printf("El numero: %d es primo\n",a);
  }
  else{
    printf("El numero :%d no es \n",a);
  }
  return 0;
}
