#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char text;
double a,b,ans,c;
int main(){
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){

        ans=((a+b)*c)/2;

        printf("Trapezoid area:%0.1lf\n",ans);
        a=0,b=0,c,ans;
    }
    return 0;
}
