#include<stdio.h>
#include <stdlib.h>
#include<string.h>

double a,b,ans;
int main(){
    while(scanf("%lf %lf",&a,&b)!=EOF){

        ans=(a*b)/2;

        printf("%0.1lf\n",ans);
        a=0,b=0,ans=0;
    }
    return 0;
}
