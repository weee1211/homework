#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int a,b;
int main(){
    while(scanf("%d %d",&a,&b)!=EOF){

        printf("%d+%d=%d\n",a,b,a+b);
        printf("%d*%d=%d\n",a,b,a*b);
        printf("%d-%d=%d\n",a,b,a-b);
        if(a%b<0){
            printf("%d/%d=%d...%d\n",a,b,((a/b)-1),(a%b)+b);
        }
        else{
            printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
        }
        a=0,b=0;
    }
    return 0;
}
