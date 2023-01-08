#include <stdio.h>

int main(void) {
  long long int innum;
  float bansu=1.6;
  double ans;
  while(scanf("%lld",&innum)!=EOF){
    ans=bansu*innum;

    printf("%.1f\n",ans);
  }
  return 0;
}
