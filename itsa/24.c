#include<stdio.h>

double a;
int main(){
    while(scanf("%lf",&a)!=EOF){
        double ans=(a*9)/5;
        ans+=32;
        ans=(int)((ans*10.0)+0.5)/10.0;
        printf("%.1lf\n",ans);
    }
    return 0;
}
