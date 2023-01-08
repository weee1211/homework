#include<stdio.h>
#include<ctype.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",a+b);
        a=0,b=0;
    }
    return 0;
}
