#include<stdio.h>

int a,b,c,d;
powpow(int tmp){
    int ans=tmp*tmp*tmp;
    return ans;
}
int main(){
    while(scanf("%d",&a)!=EOF){
        int total=a;

        b=a/100;
        c=(a%100)/10;
        d=a%10;
        b=powpow(b);
        c=powpow(c);
        d=powpow(d);
        if(b+c+d==total){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}

