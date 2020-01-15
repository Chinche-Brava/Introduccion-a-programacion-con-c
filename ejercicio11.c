// ejercicio 13 : Como se representa esta sentencia?
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i,x,z;
  scanf("%d",&x);

  i=x//*y*/z++
  ;
  printf("%d\n",i);
  return 0;
}
/* Lo compila bien ya que lee lo que esta antes de las dos barras y luego toda esa
 linea la toma como comentario y lo ignora hasta la siguente linea que termina de leer la instruccion y la cumple*/
