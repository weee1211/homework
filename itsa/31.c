#include<stdio.h>
#include<ctype.h>

int main(){
    int a,b[100000],j=0;
    while(scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){
            if(i%5==0){
                if(i%7==0){
                    b[j]=i;
                    j++;
                }
            }
        }

        for(int i=0;i<j;i++){
            if(i==j-1){
                printf("%d\n",b[i]);
            }
            else{
                printf("%d ",b[i]);
            }
            b[i]=0;
        }
        j=0,a=0;
    }
    return 0;
}
