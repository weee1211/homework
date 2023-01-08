#include<stdio.h>

int a;
int main(){
    while(scanf("%d",&a)!=EOF){
    int total=0;
    for(int i=a;i>0;i--){
        total+=i;
    }
    for(int i=1;i<a;i++){
       printf("%d + ",i);
    }
    printf("%d =",a);
    printf(" %d\n",total);
    }
    return 0;
}
