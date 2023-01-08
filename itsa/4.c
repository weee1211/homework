#include <stdio.h>

int main(void) {
  int n;
  while(scanf("%d",&n)!=EOF){
    if (3<=n&&n<=5){
      printf("Spring\n");
    }
    if (6<=n&&n<=8){
      printf("Summer\n");
    }
    if (9<=n&&n<=11){
      printf("Autumn\n");
    }
    if (12==n||n<=2){
      printf("Winter\n");
    }
  }
  return 0;
}
