//cunta atras o contador
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  printf("Introduce el numero\n");
  scanf("%d",&a);
  while (a>0) {
    printf("Explotara en:\n");
    printf("%d\n",a );
    a=a-1;
  }
  printf("BOOM!!\n");
  return 0;
}
