#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int high,m;
  double tw;
  while(scanf("%d %d",&high,&m) != EOF){
    if(m==1){
      tw=(high-80)*0.7;
      printf("%.1f\n",tw);
    }
    else{
      tw=(high-70)*0.6;
      printf("%.1f\n",tw);
    }
  }
  return 0;
}
