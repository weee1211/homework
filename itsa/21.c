#include<stdio.h>

int ans;

int main(){
    while(scanf("%d",&ans)!=EOF){
        int ans1=ans*ans,ans2=ans*ans*ans;
        printf("%d %d %d\n",ans,ans1,ans2);
    }
    return 0;
}
