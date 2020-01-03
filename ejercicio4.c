//par y positivo
#include <stdio.h>                                                              /*Incluimos librerias*/

int main(int argc, char const *argv[]) {                                        /*Despues invocamos la funcion principal*/
  int num;
  printf("intrduce el numero para determinar si es par y positivo\n");          /*Obtenemos el numero*/
  scanf("%d",&num );
  if (num%2 == 0) {                                                             /*Analizamos si el numero el par o impar*/
    printf("Es un numero par\n");
    if (num>0) {                                                                /*Y tambien si es negativo o positivo*/
      printf("El numero tambien es positivo\n");
    }
    else{
      printf("El numero es negativo\n");
    }
  }
  else{
    printf("El numero es impar\n");
      if (num>0) {
        printf("El numero tambien es positivo\n");
      }
      else{
        printf("El numero es negativo\n");
      }
  }
  return 0;
}
