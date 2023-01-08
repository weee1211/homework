#include<stdio.h>

int a;
int main(){
    while(scanf("%d",&a)!=EOF){
        int cnt=0,text[8];
        memset(text,0,sizeof(int)*8);
        while(a>=1&&cnt<=8){
            text[cnt]=a%2;
            a/=2;
            cnt++;
        }
        if(a<0){
            a=255+a+1;
            while(a>=1&&cnt<=8){
                text[cnt]=a%2;
                a/=2;
                cnt++;
            }
        }
        for(int i=7;i>=0;i--){
            printf("%d",text[i]);
        }
        a=0,cnt=1;
        printf("\n");
    }
    return 0;
}
