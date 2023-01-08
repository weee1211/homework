#include<stdio.h>

int a,b;
int main(){
    while(scanf("%d %d",&a,&b)!=EOF){

        if(a<=100&&b<=100){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}
