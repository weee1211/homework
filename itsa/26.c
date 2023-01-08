#include<stdio.h>

double a;
int main(){
    while(scanf("%lf",&a)!=EOF){
        int cnt;
        while(a>0){
            a-=0.238;
            cnt++;
        }
        printf("%d\n",cnt);
        a=0,cnt=0;
    }
    return 0;
}
