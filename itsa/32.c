#include<stdio.h>

int a;
int main(){
    while(scanf("%d",&a)!=EOF){
        int ans=0;
        for(int i=1;i<=a;i++){
            if(i%2==0&&i%3==0&&i%12!=0){
                ans=ans+i;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
