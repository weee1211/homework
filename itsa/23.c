#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

long long int a,ans=1;
int main(){
    while(scanf("%lld",&a)!=EOF){
        if(a<31){
            for(int i=1;i<=a;i++){
                ans=ans*2;
            }
            printf("%lld\n",ans);
        }
        else{
            printf("Value of more than 31\n");
        }
        a=0,ans=1;
    }
    return 0;
}
