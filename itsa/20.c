#include<stdio.h>
#include <stdlib.h>
#include<string.h>
double a,b,ans;
int main(){
    while(scanf("%lf",&a)!=EOF){
        b =a*a;
        ans=(int)((b * 10) + 0.5) / 10.0;

        printf("%0.1lf\n",ans);
        a=0,b=0;
    }
    return 0;
}
