#include<stdio.h>

int a;
int main(){
    while(scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){
            printf("%d*%d=%lld\n",i,i,i*i);
        }
    }
    return 0;
}
