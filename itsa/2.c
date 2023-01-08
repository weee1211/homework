#include <stdio.h>
#include <stdlib.h>

int main(void){
  long long int x,y;

  while (scanf(" %lld %lld",&x,&y)!=EOF){
  int pre_radius=10000;
  long long int new_radius=(x*x)+(y*y);

  if (new_radius<pre_radius)
    printf("inside\n");
  else
    printf("outside\n");
  }
return 0;
}
