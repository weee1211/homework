#include<stdio.h>

long long int a;
int main(){
    while(scanf("%lld",&a)!=EOF){
        long long int ans=1;

        while(a>0){
            ans=ans*a;
            a--;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
