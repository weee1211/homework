#include<stdio.h>

int a,b;
int main(){
    while(scanf("%d %d",&a,&b)!=EOF){
        int ans=(a+b)*(a+b);
        printf("%d\n",ans);

    }
    return 0;
}
