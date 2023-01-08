#include<stdio.h>

int a;
int main(){
    while(scanf("%d",&a)!=EOF){
        int ans1=0,ans2=0,ans3=0;
        while(a>=10){
            a-=10;
            ans1++;
        }
        while(a>=5){
            a-=5;
            ans2++;
        }
        while(a>0){
            a-=1;
            ans3++;
        }
        printf("NT10=%d\n",ans1);
        printf("NT5=%d\n",ans2);
        printf("NT1=%d\n",ans3);
    }
    return 0;
}
